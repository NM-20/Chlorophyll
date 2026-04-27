#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/LinkTrackData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D628
   RuntimeId:        112B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CCA
   VfTable:          0000000142273EE0
   Address (Base):   00000001430D6550
*/
#pragma pack(push, 8)
class ANTSignalTrackData : public LinkTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class PropertyTrackBaseData) SignalTracks; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ANTSignalTrackData) == 64);

}
