#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrackData.h>
#include <IcelinSdk.PvZGW2/GameShared/ANTLayerBlendType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D220
   RuntimeId:        10EB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CDC
   VfTable:          00000001422744A0
   Address (Base):   00000001430ECCA0
*/
#pragma pack(push, 8)
class ANTLayerData : public TimelineTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  ANTLayerBlendType BlendType; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ANTLayerData) == 48);

}
