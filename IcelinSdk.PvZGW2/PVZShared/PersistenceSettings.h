#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862280
   RuntimeId:        2038
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11E8
   VfTable:          0000000142343EB0
   Address (Base):   00000001430BDF50
*/
#pragma pack(push, 8)
class PersistenceSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PersistenceData) MultiplayerTemplate; /* 0x0020 */
  FB_HANDLE(class PointSystemParamsAsset) PointSystemParams; /* 0x0028 */
  FB_HANDLE(class RankParamsAsset) RankParams; /* 0x0030 */
  FB_HANDLE(class PersistenceConfiguration) PersistenceConfig; /* 0x0038 */
  FB_FLOAT32 DurangoGameProgressRankAdjustment; /* 0x0040 */
  FB_FLOAT32 DurangoGameProgressDivisor; /* 0x0044 */
  FB_BOOLEAN CacheUnlocksAndConsumableActivation; /* 0x0048 */
  char pad_0049[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PersistenceSettings) == 80);

}
