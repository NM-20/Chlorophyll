#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/BuoyantParts.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E3B8
   RuntimeId:        11DD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8F68
   Default Value:    0000000142BF4EF8
*/
#pragma pack(push, 4)
struct BuoyantPartsData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  BuoyantParts PartName; /* 0x0000 */
  FB_FLOAT32 Buoyancy; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(BuoyantPartsData) == 8);

}
