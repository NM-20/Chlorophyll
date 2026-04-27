#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836048
   RuntimeId:        0383
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          088F
   VfTable:          00000001421F1558
   Address (Base):   00000001430F30C0
*/
#pragma pack(push, 8)
class AudioGraphData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class AudioGraphNodeData) Nodes; /* 0x0010 */
  FB_REFARRAY(class AudioGraphParameter) PublicParameters; /* 0x0018 */
  FB_REFARRAY(class AudioGraphEvent) PublicEvents; /* 0x0020 */
  FB_REFARRAY(class AudioGraphAssetParameter) PublicAssetParameters; /* 0x0028 */
  FB_UINT16 PublicValueCount; /* 0x0030 */
  FB_UINT16 ValueCount; /* 0x0032 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(AudioGraphData) == 56);

}
