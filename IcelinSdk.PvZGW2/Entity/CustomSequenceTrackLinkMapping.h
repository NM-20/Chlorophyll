#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BDD0
   RuntimeId:        0954
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1104
   VfTable:          0000000142212408
   Address (Base):   0000000143115090
*/
#pragma pack(push, 8)
class CustomSequenceTrackLinkMapping : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 TrackLinkID; /* 0x0010 */
  FB_INT32 SequenceLinkID; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(CustomSequenceTrackLinkMapping) == 24);

}
