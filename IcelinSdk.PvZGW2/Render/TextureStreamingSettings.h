#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852550
   RuntimeId:        157E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0957
   VfTable:          000000014228DDB0
   Address (Base):   00000001430BE010
*/
#pragma pack(push, 8)
class TextureStreamingSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 ForceMipmap; /* 0x0010 */
  FB_UINT32 MinMipmapCount; /* 0x0014 */
  FB_UINT32 MaxMipmapCount; /* 0x0018 */
  FB_FLOAT32 MipmapBias; /* 0x001C */
  FB_UINT32 MaxTextureSizeKb; /* 0x0020 */
  FB_FLOAT32 FadeMipmapTime; /* 0x0024 */
  FB_UINT32 MinTextureSize; /* 0x0028 */
  FB_UINT32 PoolSize; /* 0x002C */
  FB_UINT32 PoolHeadroomSize; /* 0x0030 */
  FB_UINT32 PoolMaxAllocCount; /* 0x0034 */
  FB_UINT32 OnDemandPoolSize; /* 0x0038 */
  FB_UINT32 OnDemandMaxAllocCount; /* 0x003C */
  FB_UINT32 DefragFrameTransferLimit; /* 0x0040 */
  FB_UINT32 DefragFrameSearchLimit; /* 0x0044 */
  FB_UINT32 DefragJobCount; /* 0x0048 */
  FB_UINT32 MaxPendingLoadCount; /* 0x004C */
  FB_UINT32 MaxPendingUnloadCount; /* 0x0050 */
  FB_UINT32 MaxFrameTextureCreateSize; /* 0x0054 */
  FB_UINT32 MaxFrameTextureCreateCount; /* 0x0058 */
  FB_FLOAT32 PriorityThreshold; /* 0x005C */
  FB_UINT32 DrawClassificationStatsPosition; /* 0x0060 */
  FB_INT32 DrawLargestAssetsClassification; /* 0x0064 */
  FB_UINT32 ListViewPageIndex; /* 0x0068 */
  char pad_006C[0x0004];
  FB_CSTRING DumpLoadedListFileName; /* 0x0070 */
  FB_BOOLEAN Enable; /* 0x0078 */
  FB_BOOLEAN UpdateEnable; /* 0x0079 */
  FB_BOOLEAN DynamicLoadingEnable; /* 0x007A */
  FB_BOOLEAN ChunkLoadEnable; /* 0x007B */
  FB_BOOLEAN InstantUnloadingEnable; /* 0x007C */
  FB_BOOLEAN OnlyWantedInPool; /* 0x007D */
  FB_BOOLEAN ForceWantedEnable; /* 0x007E */
  FB_BOOLEAN LoadMipmapsEnable; /* 0x007F */
  FB_BOOLEAN UploadMipmapsEnable; /* 0x0080 */
  FB_BOOLEAN UnloadInPlaceEnable; /* 0x0081 */
  FB_BOOLEAN TextureUpdateEnable; /* 0x0082 */
  FB_BOOLEAN ImmutableUsageEnable; /* 0x0083 */
  FB_BOOLEAN MipmapsEnable; /* 0x0084 */
  FB_BOOLEAN FadeMipmapsEnable; /* 0x0085 */
  FB_BOOLEAN OverridePoolSize; /* 0x0086 */
  FB_BOOLEAN PoolEnable; /* 0x0087 */
  FB_BOOLEAN DefragEnable; /* 0x0088 */
  FB_BOOLEAN DefragTransfersEnable; /* 0x0089 */
  FB_BOOLEAN DrawStatsEnable; /* 0x008A */
  FB_BOOLEAN DrawTextureGroupStatsEnable; /* 0x008B */
  FB_BOOLEAN DrawTextureFormatStatsEnable; /* 0x008C */
  FB_BOOLEAN DrawLoadingListEnable; /* 0x008D */
  FB_BOOLEAN DrawPriorityListEnable; /* 0x008E */
  FB_BOOLEAN DrawClassificationStatsEnable; /* 0x008F */
  FB_BOOLEAN DrawClassificationExtractResident; /* 0x0090 */
  FB_BOOLEAN DrawClassificationExtractOnDemand; /* 0x0091 */
  FB_BOOLEAN DrawClassificationHighWater; /* 0x0092 */
  FB_BOOLEAN DrawLargestAssets; /* 0x0093 */
  FB_BOOLEAN DrawLargestStreamingAssets; /* 0x0094 */
  FB_BOOLEAN DumpLoadedList; /* 0x0095 */
  FB_BOOLEAN DumpPoolAllocations; /* 0x0096 */
  FB_BOOLEAN UseConditionalStreaming; /* 0x0097 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */
#pragma pack(pop)

static_assert(sizeof(TextureStreamingSettings) == 152);

}
