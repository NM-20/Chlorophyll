#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SubWorldReferenceObjectData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142877170
   RuntimeId:        2E65
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0991
   VfTable:          0000000142397D20
   Address (Base):   00000001430F47B0
*/
#pragma pack(push, 16)
class ZoneStreamerSubWorldRod : public SubWorldReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */
#pragma pack(pop)

static_assert(sizeof(ZoneStreamerSubWorldRod) == 208);

}
