#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/GamePlatform.h>
#include <IcelinSdk.PvZGW2/Online/OnlineEnvironmentUrl.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858F10
   RuntimeId:        1AAD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C6668
   Default Value:    0000000142858F28
*/
#pragma pack(push, 8)
struct OnlineEnvironmentConsoleUrlData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  GamePlatform Platform; /* 0x0000 */
  char pad_0004[0x0004];
  OnlineEnvironmentUrl Url; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(OnlineEnvironmentConsoleUrlData) == 16);

}
