#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428647E8
   RuntimeId:        220F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C36
   VfTable:          00000001423525B8
   Address (Base):   00000001430D3E50
*/
#pragma pack(push, 8)
class SwitchCharacterCustomizationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_REFARRAY(class CharacterCustomizationAsset) CharacterCustomizations; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SwitchCharacterCustomizationEntityData) == 40);

}
