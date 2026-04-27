#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428581A8
   RuntimeId:        19E0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06E8
   VfTable:          00000001422D5028
   Address (Base):   000000014310CE10
*/
#pragma pack(push, 8)
class PresenceUserProfileServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PresenceUserProfileServiceData) == 24);

}
