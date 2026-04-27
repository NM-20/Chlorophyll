#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/RadiusData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428507B8
   RuntimeId:        13B7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          064A
   VfTable:          000000014227C730
   Address (Base):   000000014310FE10
*/
#pragma pack(push, 8)
class RadiusDataOverride : public RadiusData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(RadiusDataOverride) == 40);

}
