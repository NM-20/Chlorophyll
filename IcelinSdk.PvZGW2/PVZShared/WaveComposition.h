#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428736C8
   RuntimeId:        2BDC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          071F
   VfTable:          00000001423792A0
   Address (Base):   00000001431047D0
*/
#pragma pack(push, 8)
class WaveComposition : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class WaveSubGroup) WaveSubGroups; /* 0x0018 */
  FB_FLOAT32 SpecialWavePercentage; /* 0x0020 */
  FB_BOOLEAN RandomizeSubgroupOrder; /* 0x0024 */
  FB_BOOLEAN IsHugeWave; /* 0x0025 */
  FB_BOOLEAN IsEpicSpawnWave; /* 0x0026 */
  char pad_0027[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(WaveComposition) == 40);

}
