#pragma once
#include "ptxEmitterRule.h"
#include "ptxEffectRule.h"
#include "ptxParticleRule.h"
#include "game/rage/paging/Dictionary.h"
#include "rage/paging/ref.h"
#include "rage/atl/atConstString.h"
#include "rage/grcore/texture.h"

#include "rage/rmc/drawable.h"

namespace rage
{
	struct ptxFxList : public pgBase
	{
		atConstString name;
		u32 RefCount;

		datOwner <pgDictionary<grcTexture>>			ptxTextureDictionary;
		u32 pad1;
		datOwner <pgDictionary<rmcDrawable>>		ptxModelDictionary;
		datOwner <pgDictionary<ptxParticleRule>>	ptxParticleRuleDictionary;
		u32 pad2;
		datOwner <pgDictionary<ptxEffectRule>>		ptxEffectRuleDictionary;
		datOwner <pgDictionary<ptxEmitterRule>>		ptxEmitterRuleDictionary;
	};

	struct ptxFxListInfo
	{
		pgRef<ptxFxList> m_pFxList;
		u32 m_flags;
		u8 pad[4];
	};

}


