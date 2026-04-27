#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Entity/TimeDeltaType.h>

namespace fb
{

/* TypeInfo (Array): 000000014283ADC0
   RuntimeId:        0855
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A0A
   VfTable:          000000014220BB30
   Address (Base):   00000001430F03C0
*/
#pragma pack(push, 8)
class RandomDelayEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinDelay; /* 0x0018 */
  FB_FLOAT32 MaxDelay; /* 0x001C */
  Realm Realm; /* 0x0020 */
  TimeDeltaType TimeDeltaType; /* 0x0024 */
  FB_BOOLEAN AutoStart; /* 0x0028 */
  FB_BOOLEAN RunOnce; /* 0x0029 */
  FB_BOOLEAN TrueRandom; /* 0x002A */
  char pad_002B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(RandomDelayEntityData) == 48);

}
