#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DD78
   RuntimeId:        285C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8540
   Default Value:    000000014286DD90
*/
#pragma pack(push, 4)
struct GunSwayDispersionModData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 MinAngleModifier; /* 0x0000 */
  FB_FLOAT32 MaxAngleModifier; /* 0x0004 */
  FB_FLOAT32 IncreasePerShotModifier; /* 0x0008 */
  FB_FLOAT32 DecreasePerSecondModifier; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(GunSwayDispersionModData) == 16);

}
