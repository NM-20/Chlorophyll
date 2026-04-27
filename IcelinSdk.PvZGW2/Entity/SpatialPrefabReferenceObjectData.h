#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialReferenceObjectData.h>
#include <IcelinSdk.PvZGW2/Entity/BlueprintPersistenceSetting.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A728
   RuntimeId:        07ED
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          098D
   VfTable:          000000014220C2F0
   Address (Base):   00000001430D7E10
*/
#pragma pack(push, 16)
class SpatialPrefabReferenceObjectData : public SpatialReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  BlueprintPersistenceSetting PersistenceSetting; /* 0x00A0 */
  char pad_00A4[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(SpatialPrefabReferenceObjectData) == 176);

}
