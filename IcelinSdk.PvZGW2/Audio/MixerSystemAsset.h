#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428364D0
   RuntimeId:        03C9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          063F
   VfTable:          00000001421F4BF0
   Address (Base):   0000000143118D50
*/
#pragma pack(push, 8)
class MixerSystemAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MixGroup) Groups; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MixerSystemAsset) == 32);

}
