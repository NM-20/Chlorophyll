#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ObjectBlueprint.h>
#include <IcelinSdk.PvZGW2/Entity/TimeDeltaType.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AB78
   RuntimeId:        25C6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07A0
   VfTable:          000000014235AFB0
   Address (Base):   0000000143106B70
*/
#pragma pack(push, 8)
class ProjectileBlueprint : public ObjectBlueprint
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

static_assert(sizeof(ProjectileBlueprint) == 80);

}
