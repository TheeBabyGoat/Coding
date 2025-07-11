#pragma once
#include "rage/atl/atArray.h"
#include "rage/paging/ref.h"
#include "ptxEvolution.h"
#include "rage/atl/color32.h"
#include "rage/atl/atConstString.h"


namespace rage
{
	struct ptxEmitterRule;
	struct ptxParticleRule;
	enum ptxEventType
	{
		PTXEVENT_TYPE_EMITTER = 0,
		PTXEVENT_TYPE_NUM
	};

	struct ptxEvent
	{
		virtual ~ptxEvent() {};
	
		int m_index;												
		ptxEventType m_type;
		float m_startRatio;								// the ratio of the effect's current duration when this event starts
		float m_endRatio;								// the ratio of the effect's current duration when this event ends
		datOwner<ptxEvolutionList> m_pEvolutionList;	// pointer to the list of evolutions on the event
		float m_distSqrToCamera;						
		u64 pad;
	};

	struct ptxEventEmitter : public ptxEvent
	{
		atConstString m_emitterRuleName;
		atConstString m_particleRuleName;
		datRef<ptxEmitterRule> m_pEmitterRule;
		datRef<ptxParticleRule> m_pParticleRule;

		float m_playbackRateScalarMin;
		float m_playbackRateScalarMax;
		float m_zoomScalarMin;
		float m_zoomScalarMax;
		Color32 m_colourTintMin;
		Color32 m_colourTintMax;
	};

	struct ptxTimeLine
	{
		virtual ~ptxTimeLine() {};
		atArray<datOwner<ptxEvent>> m_events;
	};

}