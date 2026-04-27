#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/SchematicPinTrackData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854808
   RuntimeId:        176D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CC9
   VfTable:          00000001422B4CE0
   Address (Base):   00000001430DAEB0
*/
#pragma pack(push, 8)
class LinkTrackData : public SchematicPinTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(LinkTrackData) == 56);

}
