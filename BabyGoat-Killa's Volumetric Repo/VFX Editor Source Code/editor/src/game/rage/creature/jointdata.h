#pragma once
#include "common/types.h"
#include "rage/paging/ref.h"
#include "rage/paging/array.h"
#include "rage/paging/base.h"
#include "rage/math/vecv.h"


namespace rage
{
	static constexpr int MAX_CONTROL_POINTS = 8;

	struct crControlPoint
	{
		float MaxSwing;
		float MinTwist;
		float MaxTwist;
	};

	struct crJointRotationLimit
	{
		int				BoneID;
		int				NumControlPoints;
		int				JointDOFs;
		Vec3V			ZeroRotationEulers;
		Vec3V			TwistAxis;
		float			TwistLimitMin;
		float			TwistLimitMax;
		float			SoftLimitScale;
		crControlPoint	ControlPoints[MAX_CONTROL_POINTS];
		bool			UseTwistLimits;
		bool			UseEulerAngles;
		bool			UsePerControlTwistLimits;
	};

	struct crJointScaleLimit
	{
		Vec3V LimitMin;
		Vec3V LimitMax;
	};

	struct crJointTranslationLimit
	{
		Vec3V LimitMin;
		Vec3V LimitMax;
	};

	struct crJointData : public pgBase
	{
		// TODO: This is wrong declaration from XML

		grcArray<crJointRotationLimit>		RotationLimits;
		grcArray<crJointScaleLimit>			TranslationLimits;
		grcArray<crJointTranslationLimit>	ScaleLimits;

		u32 m_RefCount = 1;
	};
}
