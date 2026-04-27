#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C358
   RuntimeId:        09A2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E51
   VfTable:          0000000142213750
   Address (Base):   00000001430FDB10
*/
#pragma pack(push, 8)
class SubWorldInclusionCriterion : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_STDARRAY(FB_CSTRING) Options; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SubWorldInclusionCriterion) == 32);

}
