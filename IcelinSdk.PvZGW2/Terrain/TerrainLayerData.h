#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854248
   RuntimeId:        170C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          110D
   VfTable:          00000001422AF358
   Address (Base):   00000001430FB590
*/
#pragma pack(push, 8)
class TerrainLayerData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TerrainLayerData) == 16);

}
