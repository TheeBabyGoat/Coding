#pragma once
#include "rage/math/vec.h"
#include "common/types.h"
#include "rage/rmc/drawable.h"
#include "rage/paging/ref.h"
#include "rage/atl/atConstString.h"

namespace rage
{
	struct ptxDrawable
	{
		rage::Vector4 m_vBoundInfo;
		atConstString m_name;
		datRef<rmcDrawable> m_pDrawable;
		u32 m_hashName;
		u8 pad[12];
	};
}