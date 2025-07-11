#pragma once
#include "common/types.h"
#include "rage/dat/datBase.h"
#include "rage/grm/geometry.h"
#include "rage/paging/array.h"
#include "rage/spd/aabb.h"

namespace rage
{
	struct grmModel : public datBase
	{
		grcArray< datOwner<grmGeometryQB> > m_Geometries;
		spdAABB* m_AABBs;
		u16* m_ShaderIndex;
		u8  m_BoneCount;
		u8 	m_Flags;
		u8 	m_Type;
		u8 	m_BoneIndex;
		u8 	m_ModelMask;
		u8 	m_SkinFlagAndTessellatedGeometryCount;
		u16 m_GeometryCount;
		u64	m_Unknown30;
	};

}
