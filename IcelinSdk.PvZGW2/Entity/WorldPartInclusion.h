#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SubWorldInclusion.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C578
   RuntimeId:        09C4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07F4
   VfTable:          00000001422135A0
   Address (Base):   0000000143114B50
*/
#pragma pack(push, 8)
class WorldPartInclusion : public SubWorldInclusion
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WorldPartInclusion) == 32);

}
