#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ReferenceObjectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C498
   RuntimeId:        09B6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          098E
   VfTable:          00000001422135F0
   Address (Base):   00000001430D7BD0
*/
#pragma pack(push, 16)
class WorldPartReferenceObjectData : public ReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(WorldPartReferenceObjectData) == 144);

}
