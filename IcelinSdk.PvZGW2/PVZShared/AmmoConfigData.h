#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AB18
   RuntimeId:        25C2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8D20
   Default Value:    000000014286AB30
*/
#pragma pack(push, 4)
struct AmmoConfigData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 MagazineCapacity; /* 0x0000 */
  FB_INT32 InitialNumberOfMagazines; /* 0x0004 */
  FB_INT32 NumberOfMagazines; /* 0x0008 */
  FB_UINT32 TraceFrequency; /* 0x000C */
  FB_FLOAT32 AutoReplenishDelay; /* 0x0010 */
  FB_INT32 AmmoBagPickupAmount; /* 0x0014 */
  FB_BOOLEAN AutoReplenishMagazine; /* 0x0018 */
  FB_BOOLEAN ReplenishAtProjectileLimit; /* 0x0019 */
  FB_BOOLEAN ReplenishToInitialNumberOfMagazines; /* 0x001A */
  FB_BOOLEAN ReplenishOnDeactivate; /* 0x001B */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x001C */
#pragma pack(pop)

static_assert(sizeof(AmmoConfigData) == 28);

}
