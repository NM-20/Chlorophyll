#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/EntitlementType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A870
   RuntimeId:        0EB4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C95A8
   Default Value:    000000014284A888
*/
#pragma pack(push, 8)
struct EntitlementData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING License; /* 0x0000 */
  FB_CSTRING EntitlementTag; /* 0x0008 */
  FB_CSTRING GroupName; /* 0x0010 */
  FB_CSTRING ProductId; /* 0x0018 */
  FB_CSTRING ProjectId; /* 0x0020 */
  EntitlementType UsageType; /* 0x0028 */
  FB_BOOLEAN VerifyOwnership; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(EntitlementData) == 48);

}
