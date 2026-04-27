#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858088
   RuntimeId:        19CE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06D3
   VfTable:          00000001422D50F8
   Address (Base):   000000014310CED0
*/
#pragma pack(push, 8)
class PresenceBlobServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PresenceBlobServiceData) == 24);

}
