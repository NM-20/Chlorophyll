#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428540A8
   RuntimeId:        16F2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08F4
   VfTable:          00000001422AF388
   Address (Base):   000000014310E130
*/
#pragma pack(push, 8)
class RasterCoverageData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(RasterCoverageData) == 16);

}
