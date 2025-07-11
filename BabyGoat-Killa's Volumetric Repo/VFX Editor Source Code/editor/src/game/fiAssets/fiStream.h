#pragma once
#include <iostream>
#include "memory/address.h"
#include "logger.h"
#include "helpers/is_container_traits.h"

namespace details
{
	template<typename T>
	concept IsResizableContainer = requires(T container, std::size_t size) {
		container.resize(size);
	};
}

typedef void* fiHandle_t;

enum eFiSeekWhence
{
	SEEK_FILE_BEGIN = 0,
	SEEK_FILE_CURRENT = 1,
	SEEK_FILE_END = 2,
};

struct fiFindData
{
	char fileName[256];
	int64_t fileSize;
	uint64_t lastWriteTime;
	uint64_t fileAttributes;
};

struct fiDevice
{
	virtual ~fiDevice() = default;
	virtual fiHandle_t Open(const char* path, bool isReadOnly = true) = 0;
	virtual fiHandle_t OpenBulk(const char* path, u64& offset) = 0;
	virtual fiHandle_t OpenBulkOverlapped(const char* path, u64& offset) { return OpenBulk(path, offset); }
	virtual fiHandle_t CreateBulk(const char* path) = 0;
	virtual fiHandle_t Create(const char* path) = 0;
	virtual u32 Read(fiHandle_t file, void* buffer, u32 size) = 0;
	virtual u32 ReadBulk(fiHandle_t file, u64 offset, void* buffer, u32 size) = 0;
	virtual u32 WriteOverlapped(fiHandle_t file, u64 offset, pConstVoid buffer, u32 size) = 0;
	virtual u32 Write(fiHandle_t file, pConstVoid buffer, u32 size) = 0;
	virtual u32 Seek(fiHandle_t file, s32 offset, eFiSeekWhence whence = SEEK_FILE_BEGIN)
	{
		return static_cast<u32>(Seek64(file, offset, whence));
	}
	virtual u64 Seek64(fiHandle_t file, s64 offset, eFiSeekWhence whence = SEEK_FILE_BEGIN) = 0;
	virtual bool Close(fiHandle_t file) = 0;
	virtual bool CloseBulk(fiHandle_t file) = 0;
	virtual u32 Size(fiHandle_t file)
	{
		u32 current = Seek(file, 0, SEEK_FILE_CURRENT);
		u32 size = Seek(file, 0, SEEK_FILE_END);
		Seek(file, static_cast<s32>(current), SEEK_FILE_BEGIN);
		return size;
	}

	virtual u64 Size64(fiHandle_t file)
	{
		u64 current = Seek64(file, 0, SEEK_FILE_CURRENT);
		u64 size = Seek64(file, 0, SEEK_FILE_END);
		Seek64(file, static_cast<s64>(current), SEEK_FILE_BEGIN);
		return size;
	}
	virtual bool Flush(fiHandle_t file) { return true; } // Not implemented in Release.
	virtual bool Delete(const char* path) = 0;
	virtual bool Rename(const char* oldPath, const char* newPath) = 0;
	virtual bool MakeDirectory(const char* path) = 0;
	virtual bool UnmakeDirectory(const char* path) = 0;
	virtual u32 GetAvailableDiskSpace(const char*) { return 0; }
	virtual u64  GetFileSize(const char* path) = 0;
	virtual u64 GetFileTime(const char* path) = 0;
	virtual bool SetFileTime(const char* path, u64 time) = 0;
	virtual fiHandle_t FindFileBegin(const char* path, fiFindData& findData) = 0;
	virtual bool FindFileNext(fiHandle_t file, fiFindData& findData) = 0;
	virtual bool FindFileEnd(fiHandle_t file) = 0;
	virtual fiDevice* GetLowLevelDevice() { return this; }
	virtual void FixRelativeName(char* destination, int destinationSize, const char* path) = 0;
	virtual bool SetEndOfFile(fiHandle_t file) = 0;
	virtual u32 GetAttributes(const char* path) = 0;
	virtual bool GetUnknown0x100() { return true; }
	virtual bool SetAttributes(const char* path, u32 attributes) = 0;
	virtual u64  GetRootDeviceId() = 0;
	virtual bool SafeRead(fiHandle_t file, void* buffer, u32 size);
	virtual bool SafeWrite(fiHandle_t file, pConstVoid buffer, u32 size);
	virtual u32 GetResourceInfo(const char* path, void* info);
	virtual u32 GetEncryption() { return 0; }
	virtual u32 GetBulkOffset(const char* path) { return 0; }
	virtual s64 GetPhysicalSortKey() { return 0x40000000; }
	virtual u64 Function0x148() { return 0; }
	virtual u64 Function0x150() { return 0; }
	virtual fiDevice* Function0x158() { return this; }
	virtual u64 Function0x160() { return 0; }
	virtual u32 GetPackfileIndex() { return 0; }
	virtual const char* GetDebugName() = 0;

	static fiDevice* GetDeviceImpl(const char* path, bool isReadOnly)
	{
		static auto fn = gmAddress::Scan("48 89 5C 24 08 88 54 24 10 55 56 57 41 54 41 55 41 56 41 57 48 83","fiDevice::GetDeviceImpl")
			.ToFunc< fiDevice*(const char*, bool) >();

		return fn(path, isReadOnly);
	}
};

struct fiAssetManager
{
	static const int MaxEntries = 8;
	static const int MaxPaths = 4;
	static const int MaxPathLength = 0x100;

	struct Entry {
		char folder[MaxPathLength];
	};

	char m_Paths[MaxPaths][MaxPathLength];
	Entry m_Entries[MaxEntries];
	int m_SP;
	int m_PathCount;
	int m_WritePath;
	bool m_WritePathIsWriteOnly;
};



class fiStream		// raii wrapper 
{
private:

	struct Stream
	{
		fiDevice* m_Device;
		fiHandle_t m_File;
		char* m_Buffer;

		u64 m_FileOffset = 0;
		u32 m_BufferOffset = 0;
		u32 m_ReadOffset = 0;
		u32 m_BufferSize;
	};

	Stream* m_Stream = nullptr;

private:
	
	static gmAddress GetFnAddr();
	static Stream* AssetOpen(const char* filename, const char* ext, bool unused, bool readOnly);

public:

	fiStream() = default;
	fiStream(const char* filename, const char* ext, bool readOnly = true);
	~fiStream();

	bool Open(const char* filename, const char* ext, bool readOnly = true);
	void Close();
	bool is_opened();
	
	// Actually, only std::string / std::vector<char> / std::array<char,n> match here.
	template<typename T> 	
	auto read_to() -> T requires is_container_v<T> && (sizeof(typename T::value_type) == 1)	
	{
		T container;
		if (!is_opened())
			return {};
		
		if constexpr (details::IsResizableContainer<T>)
		{
			container.resize(m_Stream->m_Device->Size(m_Stream->m_File));
		}
		std::fill(container.begin(), container.end(), 0);
		m_Stream->m_Device->Read(m_Stream->m_File, container.data(), container.size());
		return container;
	}
};



