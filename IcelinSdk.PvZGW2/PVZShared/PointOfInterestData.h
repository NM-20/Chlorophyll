#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PointOfInterestInfo.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873958
   RuntimeId:        2C00
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B50
   VfTable:          0000000142378F88
   Address (Base):   00000001430E18A0
*/
#pragma pack(push, 16)
class PointOfInterestData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PointOfInterestInfo InterestData; /* 0x0060 */
  FB_FLOAT32 InterestValue; /* 0x0090 */
  FB_FLOAT32 InnerDefenseDistance; /* 0x0094 */
  FB_FLOAT32 OuterDefenseDistance; /* 0x0098 */
  FB_INT32 ownerID; /* 0x009C */
  FB_INT32 InterestTeam; /* 0x00A0 */
  FB_BOOLEAN StartEnabled; /* 0x00A4 */
  FB_BOOLEAN Movable; /* 0x00A5 */
  FB_BOOLEAN EnforceOnNavMesh; /* 0x00A6 */
  FB_BOOLEAN ActionPerformed; /* 0x00A7 */
  char pad_00A8[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(PointOfInterestData) == 176);

}
