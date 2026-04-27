#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833350
   RuntimeId:        00F1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD5E8
   Default Value:    0000000142BEA4B8
*/
#pragma pack(push, 4)
struct InternetSimulationState
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 ReorderRatio; /* 0x0000 */
  FB_FLOAT32 LatencyMin; /* 0x0004 */
  FB_FLOAT32 LatencyMax; /* 0x0008 */
  FB_FLOAT32 DuplicateRatio; /* 0x000C */
  FB_FLOAT32 DropRatio; /* 0x0010 */
  FB_FLOAT32 CorruptRatio; /* 0x0014 */
  FB_FLOAT32 SizeRatio; /* 0x0018 */
  FB_FLOAT32 SpikeDurationMin; /* 0x001C */
  FB_FLOAT32 SpikeDurationMax; /* 0x0020 */
  FB_FLOAT32 SpikeCooldownMin; /* 0x0024 */
  FB_FLOAT32 SpikeCooldownMax; /* 0x0028 */
  FB_BOOLEAN Enabled; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(InternetSimulationState) == 48);

}
