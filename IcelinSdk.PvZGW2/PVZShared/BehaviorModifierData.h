#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873A98
   RuntimeId:        2C14
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0681
   VfTable:          0000000142378E28
   Address (Base):   0000000143104410
*/
#pragma pack(push, 8)
class BehaviorModifierData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 HighAttackUsage; /* 0x0018 */
  FB_FLOAT32 FastLocomotionUsage; /* 0x001C */
  FB_FLOAT32 DodgeUsage; /* 0x0020 */
  FB_BOOLEAN UseHighAttackAreas; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BehaviorModifierData) == 40);

}
