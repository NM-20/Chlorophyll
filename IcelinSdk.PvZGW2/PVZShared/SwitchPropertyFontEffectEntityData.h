#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865F68
   RuntimeId:        2369
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A54
   VfTable:          0000000142350658
   Address (Base):   00000001430E7B40
*/
#pragma pack(push, 8)
class SwitchPropertyFontEffectEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class UIElementFontEffect) FontEffectProperties; /* 0x0018 */
  Realm Realm; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SwitchPropertyFontEffectEntityData) == 40);

}
