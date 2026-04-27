#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Terrain/ByteRasterData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854068
   RuntimeId:        16EE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          069B
   VfTable:          00000001422AF3C8
   Address (Base):   000000014310E1F0
*/
#pragma pack(push, 8)
class DestructionDepthRasterData : public ByteRasterData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(DestructionDepthRasterData) == 24);

}
