#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIStatFormatType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870718
   RuntimeId:        29AF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C12
   VfTable:          000000014236D528
   Address (Base):   00000001430E2980
*/
#pragma pack(push, 8)
class UIFormatNumberEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING StringFormat; /* 0x0020 */
  UIStatFormatType TypeFormat; /* 0x0028 */
  FB_FLOAT32 Number; /* 0x002C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIFormatNumberEntityData) == 48);

}
