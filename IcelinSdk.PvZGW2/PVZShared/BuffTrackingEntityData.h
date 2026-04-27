#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BFA8
   RuntimeId:        26B2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A2E
   VfTable:          0000000142366B98
   Address (Base):   00000001430D3250
*/
#pragma pack(push, 8)
class BuffTrackingEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class BuffData) Buff; /* 0x0020 */
  FB_HANDLE(class BuffTypeData) BuffType; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(BuffTrackingEntityData) == 48);

}
