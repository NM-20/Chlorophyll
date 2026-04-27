#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Pathfinding/RepulsionConstraintMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850678
   RuntimeId:        13A3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          062F
   VfTable:          000000014227C7F0
   Address (Base):   000000014310FF30
*/
#pragma pack(push, 8)
class PuppetTune : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  RepulsionConstraintMode repulsionConstraintMode; /* 0x0018 */
  FB_BOOLEAN exitPuppetInObstacles; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PuppetTune) == 32);

}
