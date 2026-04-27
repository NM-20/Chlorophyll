#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858148
   RuntimeId:        19DA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06D8
   VfTable:          00000001422D5098
   Address (Base):   00000001430FA510
*/
#pragma pack(push, 8)
class PresencePrivilegeServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PresencePrivilegeServiceData) == 24);

}
