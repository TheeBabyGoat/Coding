#pragma once

#include "common/types.h"
#include "rage/math/vec.h"
#include "rage/math/quatv.h"
#include "rage/atl/atConstString.h"


namespace rage
{
	enum eBoneDof : u16
	{
		BD_ROT_X = 1 << 0,
		BD_ROT_Y = 1 << 1,
		BD_ROT_Z = 1 << 2,
		BD_LIMIT_ROT = 1 << 3,
		BD_TRANS_X = 1 << 4,
		BD_TRANS_Y = 1 << 5,
		BD_TRANS_Z = 1 << 6,
		BD_LIMIT_TRANS = 1 << 7,
		BD_SCALE_X = 1 << 8,
		BD_SCALE_Y = 1 << 9,
		BD_SCALE_Z = 1 << 10,
		BD_LIMIT_SCALE = 1 << 11,
	};

	static constexpr u16 BONE_DOF_ALL =
		BD_ROT_X | BD_ROT_Y | BD_ROT_Z |
		BD_TRANS_X | BD_TRANS_Y | BD_TRANS_Z |
		BD_SCALE_X | BD_SCALE_Y | BD_SCALE_Z;

	class crBoneData
	{
		QuatV			m_DefaultRotation;
		Vec3V			m_DefaultTranslation;
		Vec3V			m_DefaultScale;
		s16				m_Next;					// Index of next bone within parent child group
		s16				m_Parent;				// Index of parent bone
		atConstString	m_Name;
		eBoneDof		m_Dofs;
		u16				m_Index;
		u16				m_BoneId;
		u16				m_MirrorIndex;			// Always seem to match m_Index. On PEDs skeleton may be?
	};
}

