#pragma once
#include "rage/spd/sphere.h"
#include "rage/spd/aabb.h"
#include "common/types.h"
#include "rage/paging/array.h"
#include "rage/grm/model.h"

namespace rage
{
	enum eDrawableLod
	{
		LOD_HIGH,
		LOD_MED,
		LOD_LOW,
		LOD_VLOW,
		LOD_COUNT,
	};

	class rmcLod
	{
		grcArray<datOwner<grmModel>> m_Models;
	};

	struct rmcLodGroup
	{
		spdSphere m_BoundingSphere;
		spdAABB	m_BoundingBox;
		datOwner<rmcLod> m_Lods[LOD_COUNT];
		float m_LodThreshold[LOD_COUNT];
		u32 grcDrawMask[LOD_COUNT];
	};
}