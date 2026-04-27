#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/GamePlatform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857F28
   RuntimeId:        19BE
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C6FC8
   Default Value:    0000000142857F40
*/
#pragma pack(push, 8)
struct OnlinePlatformConfiguration
{
  typedef struct ValueTypeInfo TypeInfo_t;

  GamePlatform Platform; /* 0x0000 */
  char pad_0004[0x0004];
  FB_HANDLE(class OnlinePlatformData) PlatformData; /* 0x0008 */
  FB_HANDLE(class OnlineServicesAsset) Services; /* 0x0010 */
  FB_REFARRAY(class PresenceBackendData) ClientBackends; /* 0x0018 */
  FB_REFARRAY(class ServerBackendData) ServerBackends; /* 0x0020 */
  FB_BOOLEAN IsFallback; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(OnlinePlatformConfiguration) == 48);

}
