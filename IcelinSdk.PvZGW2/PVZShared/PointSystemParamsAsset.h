#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/PVZShared/PointSystemParamsEndOfRoundStats.h>

namespace fb
{

/* TypeInfo (Array): 00000001428624F0
   RuntimeId:        205A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          082B
   VfTable:          0000000142343E68
   Address (Base):   0000000143108970
*/
#pragma pack(push, 8)
class PointSystemParamsAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MultiKillTimeLimit; /* 0x0018 */
  FB_FLOAT32 TimedKillStreakMinTime; /* 0x001C */
  FB_FLOAT32 TimedKillStreakMaxTime; /* 0x0020 */
  FB_FLOAT32 DnfTimeout; /* 0x0024 */
  FB_UINT32 KillStreakX; /* 0x0028 */
  FB_UINT32 NemesisKillX; /* 0x002C */
  FB_FLOAT32 AdrenalineKillHealthLimit; /* 0x0030 */
  char pad_0034[0x0004];
  FB_STDARRAY(struct KillStreakInfo) KillStreakThresholds; /* 0x0038 */
  FB_FLOAT32 UnanimousSupportThreshold; /* 0x0040 */
  FB_FLOAT32 UnanimousSupportTickTime; /* 0x0044 */
  PointSystemParamsEndOfRoundStats EndOfRoundStats; /* 0x0048 */
  FB_STDARRAY(enum StatEvent) ScoredStats; /* 0x0058 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PointSystemParamsAsset) == 96);

}
