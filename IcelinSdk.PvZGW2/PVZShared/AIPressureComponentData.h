#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PointOfInterestInfo.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873BB8
   RuntimeId:        2C24
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D27
   VfTable:          0000000142378DB0
   Address (Base):   00000001430E13C0
*/
#pragma pack(push, 16)
class AIPressureComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PointOfInterestInfo InterestData; /* 0x0070 */
  FB_HANDLE(class PressureData) Pressure; /* 0x00A0 */
  FB_STDARRAY(struct ThreatData) ThreatLevels; /* 0x00A8 */
  FB_HANDLE(class AITypeFilterList) FilterList; /* 0x00B0 */
  char pad_00B8[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(AIPressureComponentData) == 192);

}
