#pragma once

#include "common/types.h"
#include "rage/grcore/effect.h"
#include "memory/address.h"
#include "rage/dat/datBase.h"
#include "rage/paging/ref.h"
#include "rage/paging/Dictionary.h"
#include "rage/paging/array.h"


namespace rage
{
	class grmShader : public grcInstanceData
	{

	};

	struct grmShaderGroup : public datBase
	{
		datOwner< pgDictionary <grcTexture> > m_TextureDictionary;
		grcArray< datOwner <grmShader> > m_Shaders;
	
		u64		m_Unknown20;
		u16		m_Unknown28;
		u16		m_Unknown2A;
		u32		m_Unknown2C;

		u16		m_ContainerBlockSize;
		bool	m_HasInstancedShader;

		u32		m_Unknown34;
		u64		m_Unknown38;
	};
}
