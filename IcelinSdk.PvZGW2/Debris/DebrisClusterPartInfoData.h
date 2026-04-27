#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838F88
   RuntimeId:        0654
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCDA8
   Default Value:    0000000142BEBEB0
*/
#pragma pack(push, 16)
struct DebrisClusterPartInfoData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 LinearVelocity; /* 0x0000 */
  Vec3 AngularVelocity; /* 0x0010 */
  FB_INT32 PartIndex; /* 0x0020 */
  FB_INT32 NumberOfChildren; /* 0x0024 */
  FB_FLOAT32 SplitSpeedThreshold; /* 0x0028 */
  FB_BOOLEAN SyncRestPosition; /* 0x002C */
  FB_BOOLEAN SyncContinous; /* 0x002D */
  FB_BOOLEAN InEffectWorldOnly; /* 0x002E */
  char pad_002F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(DebrisClusterPartInfoData) == 48);

}
