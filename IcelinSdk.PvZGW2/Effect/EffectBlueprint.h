#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ObjectBlueprint.h>
#include <IcelinSdk.PvZGW2/Entity/TimeDeltaType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428391B0
   RuntimeId:        0673
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          079E
   VfTable:          00000001421FEAE0
   Address (Base):   00000001430D7ED0
*/
#pragma pack(push, 8)
class EffectBlueprint : public ObjectBlueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TimeDeltaType TimeDeltaType; /* 0x0048 */
  char pad_004C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(EffectBlueprint) == 80);

}
