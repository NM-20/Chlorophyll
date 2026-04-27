#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428648C8
   RuntimeId:        221D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A49
   VfTable:          0000000142352270
   Address (Base):   00000001430E7900
*/
#pragma pack(push, 8)
class PVZBasicTimerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_FLOAT32 TotalTime; /* 0x001C */
  FB_FLOAT32 BumpTime; /* 0x0020 */
  FB_BOOLEAN IsCountdownTimer; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZBasicTimerEntityData) == 40);

}
