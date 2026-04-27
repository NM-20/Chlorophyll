#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/SchematicPinTrackData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854868
   RuntimeId:        1773
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CB8
   VfTable:          00000001422B4AA0
   Address (Base):   00000001430BD600
*/
#pragma pack(push, 8)
class PropertyTrackBaseData : public SchematicPinTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PropertyTrackBaseData) == 56);

}
