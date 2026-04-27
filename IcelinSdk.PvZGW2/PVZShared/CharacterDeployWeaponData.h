#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/ObjectDeployWeaponData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428697B8
   RuntimeId:        24C3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F02
   VfTable:          0000000142355C60
   Address (Base):   00000001430D9C50
*/
#pragma pack(push, 16)
class CharacterDeployWeaponData : public ObjectDeployWeaponData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN AutoEnter; /* 0x0070 */
  FB_BOOLEAN BeImmortalUntilDeploy; /* 0x0071 */
  char pad_0072[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(CharacterDeployWeaponData) == 128);

}
