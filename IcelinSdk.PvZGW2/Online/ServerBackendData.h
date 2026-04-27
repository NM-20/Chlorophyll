#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858DD8
   RuntimeId:        1A9B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0801
   VfTable:          00000001422D5680
   Address (Base):   00000001430BF9B0
*/
#pragma pack(push, 8)
class ServerBackendData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ServerBackendData) == 24);

}
