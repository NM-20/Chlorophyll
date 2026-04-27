#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A470
   RuntimeId:        257D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A91
   VfTable:          000000014235B340
   Address (Base):   00000001430E4960
*/
#pragma pack(push, 8)
class UIPopupEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class UIGenericPopupInstanceData) PopupData; /* 0x0020 */
  FB_CSTRING OverrideHaeder; /* 0x0028 */
  FB_CSTRING OverrideText; /* 0x0030 */
  FB_BOOLEAN ShowUIWhenActive; /* 0x0038 */
  char pad_0039[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UIPopupEntityData) == 64);

}
