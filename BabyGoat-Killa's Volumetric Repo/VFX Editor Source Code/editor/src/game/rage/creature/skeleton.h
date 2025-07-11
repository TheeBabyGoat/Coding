#pragma once
#include "rage/atl/atHashMap.h"
#include "rage/paging/base.h"
#include "rage/math/mtxv.h"
#include "rage/paging/ref.h"
#include "bonedata.h"

namespace rage
{
	enum eType
	{
		kTypeNone,

		kTypeFloat,
		kTypeInt,
		kTypeBool,
		kTypeString,
		kTypeBitSet,
		kTypeVector3,
		kTypeVector4,
		kTypeQuaternion,
		kTypeMatrix34,
		kTypeSituation,
		kTypeData,
		kTypeHashString,
		kTypeNum,

		kTypeCustom = 0x80,
	};

	struct crPropertyAttribute
	{
		virtual ~crPropertyAttribute() {};

		eType					m_Type;
		datRef<char>			Str;
		u32						key;
	};


	struct crProperties;
	struct crProperty : public pgBase
	{
		datRef<char>			Str;
		u32						key;
		atArray<void*>			m_Attributes;  //datOwner<crPropertyAttribute>
		datRef<crProperties>	m_Properties;
		u32						m_Signature;
	};

	struct crProperties
	{
		atMap<u32, datOwner<crProperty>> m_Properties;
	};

	struct crSkeletonData : public pgBase
	{
		atMap<u32, s32>			m_BoneIdTable;
		datRef<crBoneData>		m_Bones;
		datRef<Mat34V>			m_CumulativeInverseTransforms;
		datRef<Mat34V>			m_DefaultTransforms;
		datRef<s16>				m_ParentIndices;
		datRef<u16>				m_ChildParentIndices;
		datOwner<crProperties>	m_Properties;

		u32 m_Signature;
		u32 m_SignatureNonChiral;
		u32 m_SignatureComprehensive;

		u16 m_RefCount;
		u16 m_NumBones;
		u16 m_NumChildParents;
		u16 pad;
	};
}