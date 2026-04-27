#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/BlazeServerBackendData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868D40
   RuntimeId:        2427
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0806
   VfTable:          00000001423561B8
   Address (Base):   0000000143107BF0
*/
#pragma pack(push, 8)
class PVZBlazeServerBackendData : public BlazeServerBackendData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZBlazeServerBackendData) == 40);

}
