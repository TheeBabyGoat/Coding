#pragma once
#include "common/types.h"
#include "rage/atl/atArray.h"

// TODO : correct implementation
template <class T, class TSize = u16, class Alloc = RageAllocator<T>>
class grcArray : public atArray<T, TSize, Alloc>	
{
	using Array = atArray<T, TSize, Alloc>;
public:
	using Array::atArray;


};

