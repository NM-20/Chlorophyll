#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428647C8
   RuntimeId:        220D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AE3
   VfTable:          0000000142352580
   Address (Base):   00000001430E7F60
*/
#pragma pack(push, 8)
class SelectAntEnumerationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(struct SelectAntEnumInput) Events; /* 0x0020 */
  FB_INT32 EnumValue; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SelectAntEnumerationEntityData) == 48);

}
