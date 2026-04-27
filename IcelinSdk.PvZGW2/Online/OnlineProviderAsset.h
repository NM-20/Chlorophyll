#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857FE8
   RuntimeId:        19C4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0657
   VfTable:          00000001422D50E8
   Address (Base):   000000014310CFF0
*/
#pragma pack(push, 8)
class OnlineProviderAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct OnlineProviderConfiguration) Configurations; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(OnlineProviderAsset) == 32);

}
