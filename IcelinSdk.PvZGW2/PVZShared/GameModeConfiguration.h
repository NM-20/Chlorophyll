#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428619B0
   RuntimeId:        1FB9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          065B
   VfTable:          00000001423442C8
   Address (Base):   00000001431096F0
*/
#pragma pack(push, 8)
class GameModeConfiguration : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING GameModeCriterionName; /* 0x0018 */
  FB_REFARRAY(class GameModeSizeInfo) GameModeSizes; /* 0x0020 */
  FB_STDARRAY(struct GameModeInfo) GameModes; /* 0x0028 */
  FB_CSTRING FrontEndGameModeOption; /* 0x0030 */
  FB_CSTRING SplashGameModeOption; /* 0x0038 */
  FB_STDARRAY(FB_CSTRING) MPGameModes; /* 0x0040 */
  FB_STDARRAY(FB_CSTRING) PlantCoOpGameModes; /* 0x0048 */
  FB_STDARRAY(FB_CSTRING) ZombieCoOpGameModes; /* 0x0050 */
  FB_HANDLE(class GameModeSizeInfo) FallbackSizeInfo; /* 0x0058 */
  FB_CSTRING HostedModeCriterionName; /* 0x0060 */
  FB_CSTRING ServerHostedModeOption; /* 0x0068 */
  FB_CSTRING PeerHostedModeOption; /* 0x0070 */
  FB_CSTRING LocalHostedModeOption; /* 0x0078 */
  FB_STDARRAY(struct HostedModeBackendInfo) HostedModeBackends; /* 0x0080 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0088 */
#pragma pack(pop)

static_assert(sizeof(GameModeConfiguration) == 136);

}
