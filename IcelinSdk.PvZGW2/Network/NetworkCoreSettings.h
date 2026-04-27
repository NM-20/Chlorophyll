#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428500A8
   RuntimeId:        136F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11F4
   VfTable:          0000000142278F28
   Address (Base):   00000001430DB930
*/
#pragma pack(push, 8)
class NetworkCoreSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 DedicatedServerMaxSendJobCount; /* 0x0010 */
  FB_UINT32 ServerMaxSendJobCount; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(NetworkCoreSettings) == 24);

}
