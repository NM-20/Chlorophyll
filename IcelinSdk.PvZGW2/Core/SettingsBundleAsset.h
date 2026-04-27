#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833490
   RuntimeId:        0105
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07AA
   VfTable:          00000001421E51F8
   Address (Base):   000000014311C590
*/
#pragma pack(push, 8)
class SettingsBundleAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class SystemSettings) Settings; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SettingsBundleAsset) == 32);

}
