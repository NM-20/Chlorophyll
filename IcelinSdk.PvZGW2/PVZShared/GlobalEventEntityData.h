#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864AB8
   RuntimeId:        222A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A5E
   VfTable:          0000000142352148
   Address (Base):   00000001430D4870
*/
#pragma pack(push, 8)
class GlobalEventEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(struct SendGlobalEventData) SendableEvents; /* 0x0020 */
  FB_STDARRAY(struct ReceiveGlobalEventData) ReceivableEvents; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(GlobalEventEntityData) == 48);

}
