#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/MeshComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CB08
   RuntimeId:        1092
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D54
   VfTable:          0000000142267598
   Address (Base):   00000001430D6F70
*/
#pragma pack(push, 16)
class TrackComponentData : public MeshComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ScrollFactor; /* 0x0090 */
  char pad_0094[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(TrackComponentData) == 160);

}
