#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428646D8
   RuntimeId:        2201
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A9C
   VfTable:          00000001423524D8
   Address (Base):   00000001430E8080
*/
#pragma pack(push, 8)
class SelectFloatEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(struct SelectFloatInput) Events; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SelectFloatEntityData) == 40);

}
