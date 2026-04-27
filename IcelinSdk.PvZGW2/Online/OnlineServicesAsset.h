#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428581C8
   RuntimeId:        19E2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          081F
   VfTable:          00000001422D5058
   Address (Base):   000000014310CDB0
*/
#pragma pack(push, 8)
class OnlineServicesAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class PresenceServiceData) OnlineServices; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(OnlineServicesAsset) == 32);

}
