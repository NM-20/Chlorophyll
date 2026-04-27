#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AC60
   RuntimeId:        083F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B5A
   VfTable:          000000014220BDD0
   Address (Base):   00000001430DC830
*/
#pragma pack(push, 16)
class LocatorEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0060 */
  char pad_0064[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(LocatorEntityData) == 112);

}
