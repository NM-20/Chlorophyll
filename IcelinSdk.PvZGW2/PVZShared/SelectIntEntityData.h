#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864728
   RuntimeId:        2205
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09A9
   VfTable:          00000001423524A0
   Address (Base):   00000001430E8020
*/
#pragma pack(push, 8)
class SelectIntEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(struct SelectIntInput) Events; /* 0x0020 */
  FB_BOOLEAN TriggerOnPropertyChange; /* 0x0028 */
  FB_BOOLEAN UseDefaultValue; /* 0x0029 */
  char pad_002A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SelectIntEntityData) == 48);

}
