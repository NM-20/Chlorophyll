#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/BlueprintBundle.h>

namespace fb
{

/* TypeInfo (Array): 00000001428628F8
   RuntimeId:        209A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07B7
   VfTable:          0000000142343A28
   Address (Base):   0000000143108790
*/
#pragma pack(push, 8)
class PVZCharacterWeaponBlueprintBundle : public BlueprintBundle
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class AntStateAsset) AntStateAssets; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterWeaponBlueprintBundle) == 40);

}
