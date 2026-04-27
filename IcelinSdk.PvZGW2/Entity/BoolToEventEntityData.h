#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B260
   RuntimeId:        089F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A40
   VfTable:          000000014220B3F8
   Address (Base):   00000001430EF6A0
*/
#pragma pack(push, 8)
class BoolToEventEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_BOOLEAN Value; /* 0x001C */
  FB_BOOLEAN InitalEvent; /* 0x001D */
  char pad_001E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BoolToEventEntityData) == 32);

}
