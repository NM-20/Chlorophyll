#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 00000001428527C0
   RuntimeId:        15A4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11CF
   VfTable:          00000001422977F8
   Address (Base):   00000001430DB330
*/
#pragma pack(push, 8)
class DecalSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 RingBufferSizeInVerts; /* 0x0020 */
  FB_UINT32 RingBufferRecreateSizeInVerts; /* 0x0024 */
  FB_UINT32 ProjectedDecalsTrianglesPerJob; /* 0x0028 */
  FB_FLOAT32 DecalRecreateDistanceInMeters; /* 0x002C */
  FB_FLOAT32 DistanceCullFalloff; /* 0x0030 */
  FB_FLOAT32 MinOcclusionTestDistance; /* 0x0034 */
  FB_FLOAT32 MinOcclusionScreenArea; /* 0x0038 */
  FB_INT32 DebugPerEntityBatches; /* 0x003C */
  FB_INT32 DebugRingbuffer; /* 0x0040 */
  FB_FLOAT32 DisplacementBias; /* 0x0044 */
  FB_FLOAT32 DisplacementScale; /* 0x0048 */
  FB_BOOLEAN Enable; /* 0x004C */
  FB_BOOLEAN DrawEnable; /* 0x004D */
  FB_BOOLEAN DebugDrawEntityHandles; /* 0x004E */
  FB_BOOLEAN CullEnable; /* 0x004F */
  FB_BOOLEAN DistanceCullEnable; /* 0x0050 */
  FB_BOOLEAN FrustumCullEnable; /* 0x0051 */
  FB_BOOLEAN OcclusionCullEnable; /* 0x0052 */
  FB_BOOLEAN DebugOcclusionCullEnable; /* 0x0053 */
  FB_BOOLEAN DebugBatches; /* 0x0054 */
  FB_BOOLEAN WireframeEnable; /* 0x0055 */
  char pad_0056[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(DecalSettings) == 88);

}
