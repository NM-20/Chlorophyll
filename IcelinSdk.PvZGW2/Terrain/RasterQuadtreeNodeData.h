#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853F48
   RuntimeId:        16DC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EEB
   VfTable:          00000001422AF438
   Address (Base):   000000014310E370
*/
#pragma pack(push, 8)
class RasterQuadtreeNodeData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(RasterQuadtreeNodeData) == 16);

}
