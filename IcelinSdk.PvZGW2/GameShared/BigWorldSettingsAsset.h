#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142848FE0
   RuntimeId:        0D42
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0645
   VfTable:          0000000142260550
   Address (Base):   0000000143114970
*/
#pragma pack(push, 8)
class BigWorldSettingsAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class BigWorldSetting) Settings; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BigWorldSettingsAsset) == 32);

}
