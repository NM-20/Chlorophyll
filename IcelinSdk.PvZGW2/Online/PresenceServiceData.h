#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858008
   RuntimeId:        19C6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06CF
   VfTable:          00000001422D50D8
   Address (Base):   00000001430B5AD0
*/
#pragma pack(push, 8)
class PresenceServiceData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PresenceServiceData) == 24);

}
