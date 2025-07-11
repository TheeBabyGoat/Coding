#pragma once
#include "common/types.h"
#include "rage/dat/datBase.h"
#include "rage/paging/ref.h"
#include "rage/grcore/fvf.h"
#include <d3d11.h>
#include <wrl.h>

using Microsoft::WRL::ComPtr;
namespace rage
{
	struct grcVertexBuffer : public datBase
	{
		enum Flags
		{
			FlagDynamic = 1 << 0,
			FlagPreallocatedMemory = 1 << 1,
			FlagReadWrite = 1 << 2,
		};

		u16      m_Stride;
		u8       m_ReservedA;
		u8       m_Flags;
		u64      m_LockPointer;
		u32      m_VertexCount;
		void*	 m_VertexData; // We keep CPU copy of the data because game uses it for things like aligning bullet hole decals // Pointer is NOT owned by this instance!
		u32      m_ReservedB;

		datOwner<grcFvf> m_VertexFormat; 	// Instead of whole vertex declaration we store only flexible format	// and then decode it when resource is being deserialized
	};

	struct grcBufferD3D11
	{
		ComPtr<ID3D11Buffer> m_Buffer;
		void* m_CPUCopyOfData;
		u32   m_LockOffset;
		u32   m_LockSize;

		u32 m_CreateType : 3;
		u32 m_SyncType : 2;
		u32 m_WeOwnCPUCopy : 1;
		u32 m_HasBeenDeleted : 1;
		u32 m_LockType : 7;
		u32 m_Dirty : 1; // Unused

		union
		{
			HANDLE m_Mutex;
			HANDLE  m_DirtySemaphore;
		};
	};

	struct grcVertexBufferD3D11 : public grcVertexBuffer
	{
		u64                   m_Unused;
		grcVertexBufferD3D11* m_Prev = nullptr;
		grcVertexBufferD3D11* m_Next = nullptr;
		grcBufferD3D11		  m_Buffer;
	};

	struct grcIndexBuffer : public datBase
	{
		enum : u32
		{
			FLAG_PREALLOCATED = 0x01000000,
			FLAGS_MASK = 0xFF000000,
			IDX_COUNT_MASK = 0x00FFFFFF,
		};

		u32  m_IndexCountAndFlags;
		u16* m_IndexData;	// Same as in grcVertexBuffer, pointer is owned by grcIndexBufferD3D11::m_Buffer
	};

	struct grcIndexBufferD3D11 : public grcIndexBuffer
	{
		u64                  m_Unused;
		grcIndexBufferD3D11* m_Prev = nullptr;
		grcIndexBufferD3D11* m_Next = nullptr;
		grcBufferD3D11       m_Buffer;
	};
}

