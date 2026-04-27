#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C110
   RuntimeId:        0984
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07D0
   VfTable:          0000000142212248
   Address (Base):   0000000143114E50
*/
#pragma pack(push, 8)
class NetworkedObjectsAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class DataContainer) Objects; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(NetworkedObjectsAsset) == 32);

}
