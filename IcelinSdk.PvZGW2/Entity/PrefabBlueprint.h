#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Blueprint.h>
#include <IcelinSdk.PvZGW2/Entity/TimeDeltaType.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A5C8
   RuntimeId:        07D7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          078C
   VfTable:          000000014220C448
   Address (Base):   00000001430BD780
*/
#pragma pack(push, 8)
class PrefabBlueprint : public Blueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class GameObjectData) Objects; /* 0x0040 */
  TimeDeltaType TimeDeltaType; /* 0x0048 */
  char pad_004C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PrefabBlueprint) == 80);

}
