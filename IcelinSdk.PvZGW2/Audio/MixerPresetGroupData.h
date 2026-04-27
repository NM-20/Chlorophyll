#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/MixGroupState.h>

namespace fb
{

/* TypeInfo (Array): 00000001428363C8
   RuntimeId:        03BB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD308
   Default Value:    00000001428363E0
*/
#pragma pack(push, 8)
struct MixerPresetGroupData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class MixGroup) Group; /* 0x0000 */
  MixGroupState State; /* 0x0008 */
  FB_FLOAT32 AttackTime; /* 0x000C */
  FB_FLOAT32 ReleaseTime; /* 0x0010 */
  FB_INT32 Priority; /* 0x0014 */
  FB_STDARRAY(struct MixGroupPropertyValue) Properties; /* 0x0018 */
  FB_BOOLEAN IsDominant; /* 0x0020 */
  FB_BOOLEAN IsAdditive; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MixerPresetGroupData) == 40);

}
