#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BE10
   RuntimeId:        0958
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E53
   VfTable:          00000001422123F8
   Address (Base):   0000000143114FD0
*/
#pragma pack(push, 8)
class CustomSequenceTrackPropertyMapping : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 TrackPropertyID; /* 0x0010 */
  FB_INT32 SequencePropertyID; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(CustomSequenceTrackPropertyMapping) == 24);

}
