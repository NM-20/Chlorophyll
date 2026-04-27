#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857D68
   RuntimeId:        19A6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06E6
   VfTable:          00000001422D3448
   Address (Base):   00000001430FA810
*/
#pragma pack(push, 8)
class NickelServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(NickelServiceData) == 24);

}
