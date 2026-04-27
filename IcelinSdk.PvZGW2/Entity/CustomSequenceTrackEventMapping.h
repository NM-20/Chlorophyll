#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BDF0
   RuntimeId:        0956
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FAD
   VfTable:          0000000142212418
   Address (Base):   0000000143115030
*/
#pragma pack(push, 8)
class CustomSequenceTrackEventMapping : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 TrackEventID; /* 0x0010 */
  FB_INT32 SequenceEventID; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(CustomSequenceTrackEventMapping) == 24);

}
