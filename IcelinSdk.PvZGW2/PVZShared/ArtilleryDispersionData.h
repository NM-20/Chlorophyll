#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B490
   RuntimeId:        2624
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8A40
   Default Value:    000000014286B4A8
*/
#pragma pack(push, 4)
struct ArtilleryDispersionData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 MaxDispersion; /* 0x0000 */
  FB_FLOAT32 DispersionAimMove; /* 0x0004 */
  FB_FLOAT32 DispersionAimMoveThreshold; /* 0x0008 */
  FB_FLOAT32 DispersionFiring; /* 0x000C */
  FB_FLOAT32 DispersionDeployment; /* 0x0010 */
  FB_FLOAT32 DecreasePerSecond; /* 0x0014 */
  FB_BOOLEAN DispersionActive; /* 0x0018 */
  char pad_0019[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x001C */
#pragma pack(pop)

static_assert(sizeof(ArtilleryDispersionData) == 28);

}
