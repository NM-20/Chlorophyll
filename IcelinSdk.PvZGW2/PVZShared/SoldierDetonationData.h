#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DA38
   RuntimeId:        282E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B85E0
   Default Value:    000000014286A628
*/
#pragma pack(push, 4)
struct SoldierDetonationData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Angle; /* 0x0000 */
  FB_FLOAT32 Radius; /* 0x0004 */
  FB_FLOAT32 SoldierDetonationActivationDelay; /* 0x0008 */
  FB_FLOAT32 MinSpeedForActivation; /* 0x000C */
  FB_BOOLEAN HasSoldierDetonation; /* 0x0010 */
  FB_BOOLEAN UseAngle; /* 0x0011 */
  char pad_0012[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(SoldierDetonationData) == 20);

}
