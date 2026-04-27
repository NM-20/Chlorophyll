#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/GamePhysicsEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AAE0
   RuntimeId:        0ECF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B20
   VfTable:          00000001422636D8
   Address (Base):   00000001430ED9C0
*/
#pragma pack(push, 16)
class DynamicGamePhysicsEntityData : public GamePhysicsEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(DynamicGamePhysicsEntityData) == 144);

}
