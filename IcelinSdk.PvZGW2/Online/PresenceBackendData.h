#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858AF0
   RuntimeId:        1A77
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06A6
   VfTable:          00000001422D57D8
   Address (Base):   00000001430BD5A0
*/
#pragma pack(push, 8)
class PresenceBackendData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PresenceBackendData) == 24);

}
