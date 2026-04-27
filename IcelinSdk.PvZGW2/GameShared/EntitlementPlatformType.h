#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/GamePlatform.h>
#include <IcelinSdk.PvZGW2/GameShared/EntitlementType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A820
   RuntimeId:        0EB0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C95E8
   Default Value:    0000000142BA4848
*/
#pragma pack(push, 4)
struct EntitlementPlatformType
{
  typedef struct ValueTypeInfo TypeInfo_t;

  GamePlatform Platform; /* 0x0000 */
  EntitlementType EntitlementType; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(EntitlementPlatformType) == 8);

}
