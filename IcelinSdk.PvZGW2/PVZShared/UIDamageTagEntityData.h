#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870738
   RuntimeId:        29B1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AE4
   VfTable:          000000014236D598
   Address (Base):   00000001430E2920
*/
#pragma pack(push, 8)
class UIDamageTagEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIScreenRenderEntityData) ScreenEntityBlueprint; /* 0x0018 */
  FB_FLOAT32 NormalDamageDuration; /* 0x0020 */
  FB_FLOAT32 BlockedDamageDuration; /* 0x0024 */
  FB_FLOAT32 CriticalDamageDuration; /* 0x0028 */
  FB_FLOAT32 HealDamageVertialOffset; /* 0x002C */
  Vec2 TagScreenOffset; /* 0x0030 */
  FB_UINT32 TargetPlayerId; /* 0x0038 */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UIDamageTagEntityData) == 64);

}
