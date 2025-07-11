#pragma once

#include "common/types.h"
#include "rage/paging/base.h"
#include "lodgroup.h"
#include "rage/atl/atConstString.h"
#include "rage/math/mtxv.h"
#include "rage/creature/skeleton.h"
#include "rage/grm/shader.h"
#include "rage/creature/jointdata.h"


namespace rage
{
	struct rmcDrawable : public pgBase
	{
		datOwner<grmShaderGroup>    m_ShaderGroup;
		datOwner<crSkeletonData>	m_SkeletonData;
		rmcLodGroup					m_LodGroup;
		datOwner<crJointData>		m_JointData;
		u16							m_HandleIndex;
		u16							m_ContainerSizeQW;		// Unused
		void*						m_Container;			// Unused
		const char*					m_DebugName;
		
		virtual void Delete();
		virtual void Draw(const Mat34V& mtx, u32 mask, eDrawableLod lod);
		virtual void DrawSkinned(const Mat34V& mtx, u64 mtxSet, u32 mask, eDrawableLod lod);
		virtual void DrawNoShaders() {}
		virtual void DrawSkinnedNoShaders() {}
		virtual void IsVisible34() {}
		virtual void IsVisible44() {}
		virtual u32 GetBucketMask(int lod);
	};

}

