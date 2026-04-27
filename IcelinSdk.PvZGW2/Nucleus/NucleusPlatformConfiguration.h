#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/GamePlatform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857E70
   RuntimeId:        19B6
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C6FE8
   Default Value:    0000000142857E88
*/
#pragma pack(push, 8)
struct NucleusPlatformConfiguration
{
  typedef struct ValueTypeInfo TypeInfo_t;

  GamePlatform Platform; /* 0x0000 */
  char pad_0004[0x0004];
  FB_CSTRING ClientId; /* 0x0008 */
  FB_CSTRING ClientSecret; /* 0x0010 */
  FB_CSTRING LoginScope; /* 0x0018 */
  FB_CSTRING ClientRedirectUrl; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(NucleusPlatformConfiguration) == 40);

}
