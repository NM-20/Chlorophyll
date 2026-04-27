#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E768
   RuntimeId:        120B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CF4
   VfTable:          0000000142273008
   Address (Base):   00000001430BC9E0
*/
#pragma pack(push, 16)
class GamePhysicsComponentData : public PhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0090 */
  char pad_0094[0x0004];
  FB_REFARRAY(class EffectParameter) EffectParameters; /* 0x0098 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(GamePhysicsComponentData) == 160);

}
