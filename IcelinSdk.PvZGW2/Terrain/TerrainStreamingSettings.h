#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854698
   RuntimeId:        174E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          083E
   VfTable:          00000001422AF0A8
   Address (Base):   00000001430DB030
*/
#pragma pack(push, 8)
class TerrainStreamingSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 DataLoadJobCount; /* 0x0010 */
  FB_UINT32 ActiveFreeStreamingDataLoadJobCount; /* 0x0014 */
  FB_UINT32 AdditionalBlurriness; /* 0x0018 */
  FB_FLOAT32 InvisibleDetailReductionFactor; /* 0x001C */
  FB_FLOAT32 OccludedDetailReductionFactor; /* 0x0020 */
  FB_UINT32 HeightfieldAtlasSampleCountXFactor; /* 0x0024 */
  FB_UINT32 HeightfieldAtlasSampleCountYFactor; /* 0x0028 */
  FB_UINT32 MaskAtlasSampleCountXFactor; /* 0x002C */
  FB_UINT32 MaskAtlasSampleCountYFactor; /* 0x0030 */
  FB_UINT32 MaskAdditionalBlurriness; /* 0x0034 */
  FB_UINT32 ColorAtlasSampleCountXFactor; /* 0x0038 */
  FB_UINT32 ColorAtlasSampleCountYFactor; /* 0x003C */
  FB_UINT32 ColorAdditionalBlurriness; /* 0x0040 */
  FB_BOOLEAN LoadOccluderDataEnable; /* 0x0044 */
  FB_BOOLEAN KeepPoolFullEnable; /* 0x0045 */
  char pad_0046[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(TerrainStreamingSettings) == 72);

}
