#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852DD0
   RuntimeId:        1604
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EE1
   VfTable:          00000001422A16E8
   Address (Base):   00000001430BFB90
*/
#pragma pack(push, 8)
class MeshStreamingSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 MaxUnloadCountPerFrame; /* 0x0010 */
  FB_UINT32 PoolSize; /* 0x0014 */
  FB_UINT32 PoolHeadroomSize; /* 0x0018 */
  FB_UINT32 PoolMaxAllocCount; /* 0x001C */
  FB_UINT32 DefragTransferLimit; /* 0x0020 */
  FB_UINT32 DefragSearchLimit; /* 0x0024 */
  FB_UINT32 DefragJobCount; /* 0x0028 */
  FB_INT32 ForceLod; /* 0x002C */
  FB_UINT32 MaxPendingLoadCount; /* 0x0030 */
  FB_FLOAT32 DistanceMin; /* 0x0034 */
  FB_UINT32 ListViewPageIndex; /* 0x0038 */
  FB_UINT32 ListViewSortOrder; /* 0x003C */
  FB_CSTRING DumpLoadedListFileName; /* 0x0040 */
  FB_CSTRING DumpInstanceListFileName; /* 0x0048 */
  FB_UINT32 ReservedPositionedInstanceCount; /* 0x0050 */
  FB_UINT32 ReservedDistancedInstanceCount; /* 0x0054 */
  FB_BOOLEAN Enable; /* 0x0058 */
  FB_BOOLEAN UpdateEnable; /* 0x0059 */
  FB_BOOLEAN UpdateJobEnable; /* 0x005A */
  FB_BOOLEAN PriorityJobEnable; /* 0x005B */
  FB_BOOLEAN PrioritySpuJobEnable; /* 0x005C */
  FB_BOOLEAN UseSlowTexturePrio; /* 0x005D */
  FB_BOOLEAN DynamicLoadingEnable; /* 0x005E */
  FB_BOOLEAN InstantUnloadingEnable; /* 0x005F */
  FB_BOOLEAN AsyncCreatesEnable; /* 0x0060 */
  FB_BOOLEAN DxImmutableUsageEnable; /* 0x0061 */
  FB_BOOLEAN OverridePoolSizes; /* 0x0062 */
  FB_BOOLEAN DefragEnable; /* 0x0063 */
  FB_BOOLEAN DefragTransfersEnable; /* 0x0064 */
  FB_BOOLEAN PrioritizeVisibleMeshesFirstEnable; /* 0x0065 */
  FB_BOOLEAN PrioritizeVisibleLodsFirstEnable; /* 0x0066 */
  FB_BOOLEAN PrioritizeVisibleLoadsEnable; /* 0x0067 */
  FB_BOOLEAN PrioritizeTexturesEnable; /* 0x0068 */
  FB_BOOLEAN HighestPriorityEnable; /* 0x0069 */
  FB_BOOLEAN PrioritizeNearestPointEnable; /* 0x006A */
  FB_BOOLEAN DrawInstanceBoxesEnable; /* 0x006B */
  FB_BOOLEAN DrawStatsEnable; /* 0x006C */
  FB_BOOLEAN DrawMissingListEnable; /* 0x006D */
  FB_BOOLEAN DrawPriorityListEnable; /* 0x006E */
  FB_BOOLEAN DrawLoadingListEnable; /* 0x006F */
  FB_BOOLEAN DrawMeshListEnable; /* 0x0070 */
  FB_BOOLEAN DrawNonStreamedListEnable; /* 0x0071 */
  FB_BOOLEAN DumpLoadedList; /* 0x0072 */
  FB_BOOLEAN DumpInstanceList; /* 0x0073 */
  FB_BOOLEAN DumpPoolAllocations; /* 0x0074 */
  FB_BOOLEAN UseConditionalStreaming; /* 0x0075 */
  char pad_0076[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */
#pragma pack(pop)

static_assert(sizeof(MeshStreamingSettings) == 120);

}
