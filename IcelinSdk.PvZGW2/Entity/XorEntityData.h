#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AB28
   RuntimeId:        082D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A12
   VfTable:          000000014220BEC8
   Address (Base):   00000001430F0900
*/
#pragma pack(push, 8)
class XorEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_BOOLEAN In1; /* 0x001C */
  FB_BOOLEAN In2; /* 0x001D */
  char pad_001E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(XorEntityData) == 32);

}
