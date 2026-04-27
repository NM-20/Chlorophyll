#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862E00
   RuntimeId:        20C8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11CE
   VfTable:          0000000142354060
   Address (Base):   00000001430DA5B0
*/
#pragma pack(push, 8)
class PVZCharacterSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PVZCharacterWeaponSwitchingData) PVZCharacterWeaponSwitching; /* 0x0020 */
  FB_HANDLE(class CharacterMetaDataTreeClass) CharacterMetaData; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterSettings) == 48);

}
