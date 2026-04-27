#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876508
   RuntimeId:        2DC0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09E1
   VfTable:          00000001423931E0
   Address (Base):   00000001430D85D0
*/
#pragma pack(push, 8)
class StateNodeEntityBaseData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING StateName; /* 0x0018 */
  Realm Realm; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(StateNodeEntityBaseData) == 40);

}
