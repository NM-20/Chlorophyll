#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/ServerBackendData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858DF8
   RuntimeId:        1A9D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0802
   VfTable:          00000001422D5670
   Address (Base):   00000001430DA970
*/
#pragma pack(push, 8)
class LocalServerBackendData : public ServerBackendData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(LocalServerBackendData) == 24);

}
