#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870810
   RuntimeId:        29BD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A55
   VfTable:          000000014236D6E8
   Address (Base):   00000001430E3580
*/
#pragma pack(push, 8)
class UINotificationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING DisplayID; /* 0x0018 */
  FB_FLOAT32 DisplayTime; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UINotificationEntityData) == 40);

}
