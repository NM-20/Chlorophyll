#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/AxisAlignedBox.h>

namespace fb
{

/* TypeInfo (Array): 00000001428555D8
   RuntimeId:        1826
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          116F
   VfTable:          00000001422BBFA0
   Address (Base):   000000014310D8F0
*/
#pragma pack(push, 16)
class DestructionVolumeData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class DestructionVolumeAsset) Asset; /* 0x0010 */
  FB_STDARRAY(struct Vec4) Impacts; /* 0x0018 */
  AxisAlignedBox BoundingBox; /* 0x0020 */
  FB_STDARRAY(FB_UINT32) PartToImpactIndices; /* 0x0040 */
  char pad_0048[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(DestructionVolumeData) == 80);

}
