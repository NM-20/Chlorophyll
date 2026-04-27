#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SubWorldInclusionCriterion.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C558
   RuntimeId:        09C2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E52
   VfTable:          0000000142213590
   Address (Base):   0000000143114BB0
*/
#pragma pack(push, 8)
class WorldPartInclusionCriterion : public SubWorldInclusionCriterion
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WorldPartInclusionCriterion) == 32);

}
