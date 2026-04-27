#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C378
   RuntimeId:        09A4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07F3
   VfTable:          0000000142213730
   Address (Base):   00000001430FDAB0
*/
#pragma pack(push, 8)
class SubWorldInclusion : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class SubWorldInclusionCriterion) Criteria; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SubWorldInclusion) == 32);

}
