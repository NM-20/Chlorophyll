#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/EntityTrackBaseData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854CE8
   RuntimeId:        17BD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CAF
   VfTable:          00000001422B54B8
   Address (Base):   00000001430DAD30
*/
#pragma pack(push, 8)
class LinkedEntityTrackData : public EntityTrackBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 DataLinkSourceId; /* 0x0038 */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(LinkedEntityTrackData) == 64);

}
