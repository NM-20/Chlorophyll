#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ObjectBlueprint.h>
#include <IcelinSdk.PvZGW2/Entity/TimeDeltaType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EE60
   RuntimeId:        1269
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          079C
   VfTable:          0000000142274838
   Address (Base):   0000000143110E30
*/
#pragma pack(push, 8)
class VisualEnvironmentBlueprint : public ObjectBlueprint
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

static_assert(sizeof(VisualEnvironmentBlueprint) == 80);

}
