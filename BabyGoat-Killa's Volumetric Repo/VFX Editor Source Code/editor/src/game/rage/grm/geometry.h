#pragma once
#include <array>
#include "common/types.h"
#include "rage/dat/datBase.h"
#include "rage/grcore/buffer.h"
#include "memory/address.h"
#include "rage/grcore/fvf.h"

namespace rage
{
	enum grcPrimitiveType : u8
	{
		PRIM_POINT,
		PRIM_LINES,
		PRIM_LINE,
		PRIM_TRIANGLES,
		PRIM_TRIANGLE,
	};

	struct grmGeometryQB : public datBase
	{	
		static constexpr int MAX_VERT_BUFFERS = 4;

		grcVertexDeclaration*   m_VertexDeclaration;
		int						m_Type;
		datOwner<grcVertexBufferD3D11> m_VertexBuffers[MAX_VERT_BUFFERS];
		datOwner<grcIndexBufferD3D11>  m_IndexBuffers[MAX_VERT_BUFFERS];
		u32						m_IndexCount;				// Num of indices that will be rendered (Passed to DrawIndexed)
		u32						m_PrimitiveCount;			// Unused
		u16						m_VertexCount;				// Unused, also uses 16 bits for some reason
		grcPrimitiveType		m_PrimitiveType;
		u8						m_QuadTreeData;
		u16*					m_BoneIDs;	
		u8						m_VertexStride;
		u8						m_Unknown71;
		u16						m_BoneIDsCount;
		void*					m_VtxData;
		void*					m_UnusedVertexDeclaration;
		datOwner<grcIndexBufferD3D11> m_UnusedVertexBuffer;
		u32						m_IndexOffset;

		virtual ~grmGeometryQB() = default;

		virtual void Draw();
		virtual void DrawInstanced(u64 instanceData) {}
		virtual void DrawSimple() {}
		virtual void Prefetch() {}
		virtual void DrawSkinned(u64 bones)
		{
			static gmAddress vft = gmAddress::Scan("48 8D 05 ?? ?? ?? ?? 33 F6 48 8B D9 48 89 01 8B 05").GetRef(3);
			static gmAddress drawSkinned = *(u64*)(vft + 0x28);
			static auto fn = drawSkinned.ToFunc<void(grmGeometryQB*, u64)>();
			fn(this, bones);
		}

		virtual const grcFvf* GetFvf() const { return m_VertexBuffers[0]->m_VertexFormat.Get(); }
		virtual const u16* GetBoneIDs() const { return m_BoneIDs; }
		virtual u16 GetBoneIDsCount() const { return m_BoneIDsCount; }
		virtual void Function0() {}
		virtual bool Function1() { return false; }
		virtual void Function2() {}
		virtual void Function3() {}
		virtual void Function4() {}
		virtual void Function5() {}
		virtual grcVertexBuffer* GetVertexBuffer(int quad) { return m_VertexBuffers[quad].Get(); }
		virtual void Function7() {} // ReplaceVertexBuffers
		virtual void SetVertexBuffer() {}
		virtual void Function9() {}
		virtual void Function10() {}
		virtual void Function11() {}
		virtual void Function12() {}
		virtual grcIndexBuffer* GetIndexBuffer(int quad) const;
		virtual grcPrimitiveType GetPrimitiveType() const { return m_PrimitiveType; }
		virtual u32 GetPrimitiveCount() const { return m_PrimitiveCount; }
		virtual void Function13() {}
		virtual u32 GetCurrentVertsCount() const { return m_VertexCount; }
		virtual u32 GetVertexCount() const;
		virtual u32 GetIndexCount() const { return m_IndexCount; }
		virtual void Function14() {}
		virtual void Function15() {}
		virtual void Clone() {}
		virtual void Function16() {}
		virtual void Function17() {}
		virtual void Function18() {}
		virtual void Function19() {}
		virtual void Function20() {}
	};

}