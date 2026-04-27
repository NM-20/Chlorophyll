#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/WheelComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CAA8
   RuntimeId:        108C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D1A
   VfTable:          0000000142267618
   Address (Base):   00000001430D6FD0
*/
#pragma pack(push, 16)
class TrackWheelComponentData : public WheelComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING BoneName; /* 0x0080 */
  char pad_0088[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(TrackWheelComponentData) == 144);

}
