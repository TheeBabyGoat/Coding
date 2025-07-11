#pragma once

#include "rage/dat/datBase.h"
#include "rage/paging/ref.h"
#include "rage/paging/base.h"
#include "ptxKeyframeProp.h"



namespace rage
{
	enum ptxDomainShape : int
	{
		PTXDOMAIN_SHAPE_INVALID = -1,

		PTXDOMAIN_SHAPE_BOX = 0,
		PTXDOMAIN_SHAPE_SPHERE,
		PTXDOMAIN_SHAPE_CYLINDER,
		PTXDOMAIN_SHAPE_ATTRACTOR,

		PTXDOMAIN_SHAPE_NUM
	};

	enum ptxDomainType
	{
		PTXDOMAIN_TYPE_CREATION = 0,
		PTXDOMAIN_TYPE_TARGET,
		PTXDOMAIN_TYPE_ATTRACTOR,

		PTXDOMAIN_TYPE_NUM
	};

	struct ptxDomain : public datBase
	{
		int m_type;									// the type of domain (creation, target or attractor)
		int m_shape;								// the shape of the domain (box, sphere, cylinder, attractor)

		bool m_isWorldSpace;						// whether the domain rotation is in world space or effect space (the position is always in effect space)
		bool m_isPointRelative;						// whether the (target) domain is relative to the effect or point
		bool m_isCreationRelative;					// whether the (target or attractor) domain is relative to the creation domain
		bool m_isTargetRelative;					// whether the (attractor) domain is relative to the target domain

		ptxKeyframeProp m_positionKFP;				// keyframeable position of the domain
		ptxKeyframeProp m_rotationKFP;				// keyframeable rotation of the domain
		ptxKeyframeProp m_sizeOuterKFP;				// keyframeable outer size of the domain
		ptxKeyframeProp m_sizeInnerKFP;				// keyframeable inner size of the domain

		float m_fileVersion;						// this domain's file version
		ptxKeyframePropList m_keyframePropList;		// list of keyframeable properties
		u8 m_pad2[4];
	};

	struct ptxDomainObj
	{
		datOwner<ptxDomain> m_pDomain;
		int m_newDomainShape;
	};
}
