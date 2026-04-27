#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853F88
   RuntimeId:        16E0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0695
   VfTable:          00000001422AF418
   Address (Base):   00000001430D0620
*/
#pragma pack(push, 8)
class RasterQuadtreeData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(RasterQuadtreeData) == 24);

}
