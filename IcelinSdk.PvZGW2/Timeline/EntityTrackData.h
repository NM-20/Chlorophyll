#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/EntityTrackBaseData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854CA8
   RuntimeId:        17B9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CAD
   VfTable:          00000001422B55A8
   Address (Base):   00000001430D5AD0
*/
#pragma pack(push, 8)
class EntityTrackData : public EntityTrackBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_GUID) GuidChain; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(EntityTrackData) == 64);

}
