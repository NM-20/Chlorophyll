#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PointOfInterestInfo.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873978
   RuntimeId:        2C02
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D45
   VfTable:          0000000142379028
   Address (Base):   00000001430E1480
*/
#pragma pack(push, 16)
class PointOfInterestComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PointOfInterestInfo InterestData; /* 0x0070 */
  FB_FLOAT32 InterestValue; /* 0x00A0 */
  FB_INT32 ownerID; /* 0x00A4 */
  FB_INT32 InterestTeam; /* 0x00A8 */
  FB_BOOLEAN StartEnabled; /* 0x00AC */
  FB_BOOLEAN Movable; /* 0x00AD */
  FB_BOOLEAN EnforceOnNavMesh; /* 0x00AE */
  char pad_00AF[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(PointOfInterestComponentData) == 176);

}
