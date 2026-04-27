#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamAsset.h>
#include <IcelinSdk.PvZGW2/GameShared/FactionId.h>

namespace fb
{

/* TypeInfo (Array): 00000001428491C0
   RuntimeId:        0D5C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0760
   VfTable:          00000001422603D8
   Address (Base):   00000001430FD7B0
*/
#pragma pack(push, 8)
class TeamData : public TeamAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FactionId Faction; /* 0x0018 */
  char pad_001C[0x0004];
  FB_REFARRAY(class CharacterCustomizationAsset) SoldierCustomization; /* 0x0020 */
  FB_REFARRAY(class VehicleCustomizationAsset) VehicleCustomization; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(TeamData) == 48);

}
