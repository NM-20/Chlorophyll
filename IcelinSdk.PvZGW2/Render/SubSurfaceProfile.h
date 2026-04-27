#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/SubSurfaceProfilePreset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852EB0
   RuntimeId:        1612
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BA1C0
   Default Value:    0000000142852EC8
*/
#pragma pack(push, 4)
struct SubSurfaceProfile
{
  typedef struct ValueTypeInfo TypeInfo_t;

  SubSurfaceProfilePreset Preset; /* 0x0000 */
  FB_FLOAT32 ScatteringScale; /* 0x0004 */
  FB_FLOAT32 ScatteringSpikeAmount; /* 0x0008 */
  FB_FLOAT32 RadiusR; /* 0x000C */
  FB_FLOAT32 RadiusG; /* 0x0010 */
  FB_FLOAT32 RadiusB; /* 0x0014 */
  FB_FLOAT32 TranslucencyScale; /* 0x0018 */
  FB_FLOAT32 TranslucencyBaseColorAmount; /* 0x001C */
  FB_FLOAT32 TranslucencyMultiplier; /* 0x0020 */
  FB_FLOAT32 TranslucencyShadowBias; /* 0x0024 */
  FB_BOOLEAN ScatteringEnable; /* 0x0028 */
  FB_BOOLEAN TranslucencyEnable; /* 0x0029 */
  FB_BOOLEAN AutomaticThicknessEnable; /* 0x002A */
  char pad_002B[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x002C */
#pragma pack(pop)

static_assert(sizeof(SubSurfaceProfile) == 44);

}
