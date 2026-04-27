#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Entity/DilationPriority.h>
#include <IcelinSdk.PvZGW2/Entity/TimeDeltaType.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B4D8
   RuntimeId:        08C4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          099C
   VfTable:          000000014220B068
   Address (Base):   00000001430F1020
*/
#pragma pack(push, 8)
class DilationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_FLOAT32 FadeInTime; /* 0x001C */
  FB_FLOAT32 FadeOutTime; /* 0x0020 */
  FB_FLOAT32 RealTimeDuration; /* 0x0024 */
  DilationPriority Priority; /* 0x0028 */
  FB_FLOAT32 DilationValue; /* 0x002C */
  TimeDeltaType TimeDeltaType; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(DilationEntityData) == 56);

}
