#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C960
   RuntimeId:        107C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9228
   Default Value:    000000014284C978
*/
#pragma pack(push, 8)
struct BasicUnlockInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_GUID UnlockGuid; /* 0x0000 */
  FB_UINT32 Identifier; /* 0x0010 */
  FB_UINT32 UnlockScore; /* 0x0014 */
  FB_STDARRAY(FB_CSTRING) Licenses; /* 0x0018 */
  FB_STDARRAY(FB_CSTRING) AdditionalLicenses; /* 0x0020 */
  FB_STDARRAY(FB_CSTRING) AwardedLicenses; /* 0x0028 */
  FB_CSTRING StringId; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(BasicUnlockInfo) == 56);

}
