#include "fiStream.h"

gmAddress fiStream::GetFnAddr()
{
	static auto addr = gmAddress::Scan("48 8D 0D ?? ?? ?? ?? 45 33 C9 4C 8B C7 48 8B D5 C6 44 24 ?? 01 89 44 24");
	return addr;
}

fiStream::Stream* fiStream::AssetOpen(const char* filename, const char* ext, bool unused, bool readOnly)
{
	gmAddress addr = GetFnAddr();
	fiAssetManager* AssetManager = addr.GetRef(3).To<fiAssetManager*>();
	auto fn = addr.GetAt(25).GetCall().ToFunc< fiStream::Stream*(void*, const char*, const char*, bool, bool) >();
	return fn(AssetManager, filename, ext, unused, readOnly);
}

fiStream::fiStream(const char* filename, const char* ext, bool readOnly)
{
	m_Stream = AssetOpen(filename, ext, false, readOnly);
}

bool fiStream::Open(const char* filename, const char* ext, bool readOnly)
{
	if (m_Stream)
		return false;

	m_Stream = AssetOpen(filename, ext, false, readOnly);
	return is_opened();
}

void fiStream::Close()
{
	if (!m_Stream)
		return;

	gmAddress addr = GetFnAddr();
	addr.GetAt(137).GetCall().ToFunc< void(fiStream::Stream*) >()(m_Stream);		// Sanitize
	addr.GetAt(145).GetCall().ToFunc< void(fiStream::Stream*) >()(m_Stream);		// Close
	m_Stream = nullptr;
}

bool fiStream::is_opened()
{
	return m_Stream != nullptr;
}

fiStream::~fiStream()
{
	Close();
}
