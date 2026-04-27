#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864778
   RuntimeId:        2209
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AF9
   VfTable:          0000000142352468
   Address (Base):   00000001430E7FC0
*/
#pragma pack(push, 8)
class SelectUIntEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(struct SelectUIntInput) Events; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SelectUIntEntityData) == 40);

}
