#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C1B0
   RuntimeId:        098E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A47
   VfTable:          0000000142212180
   Address (Base):   00000001430EEF80
*/
#pragma pack(push, 8)
class CompareBoolEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_BOOLEAN Bool; /* 0x001C */
  FB_BOOLEAN TriggerOnPropertyChange; /* 0x001D */
  FB_BOOLEAN TriggerOnStart; /* 0x001E */
  FB_BOOLEAN AlwaysSend; /* 0x001F */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CompareBoolEntityData) == 32);

}
