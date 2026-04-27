#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855778
   RuntimeId:        1840
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C75
   VfTable:          00000001422BBD30
   Address (Base):   00000001430EA000
*/
#pragma pack(push, 8)
class EnlightenEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Priority; /* 0x0018 */
  Realm Realm; /* 0x001C */
  FB_BOOLEAN Enable; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(EnlightenEntityData) == 40);

}
