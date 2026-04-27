#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/WorldPartReferenceObjectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C4B8
   RuntimeId:        09B8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          098F
   VfTable:          0000000142213630
   Address (Base):   00000001430DC6B0
*/
#pragma pack(push, 16)
class LayerReferenceObjectData : public WorldPartReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(LayerReferenceObjectData) == 144);

}
