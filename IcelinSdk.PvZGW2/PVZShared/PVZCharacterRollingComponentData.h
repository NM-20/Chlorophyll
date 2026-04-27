#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZRollingAntBinding.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponSlot.h>

namespace fb
{

/* TypeInfo (Array): 00000001428630A8
   RuntimeId:        20E8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D1C
   VfTable:          0000000142353F98
   Address (Base):   00000001430D3FD0
*/
#pragma pack(push, 16)
class PVZCharacterRollingComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Radius; /* 0x0070 */
  char pad_0074[0x0004];
  FB_CSTRING BoneCollisionStateName; /* 0x0078 */
  PVZRollingAntBinding PVZRollingBinding; /* 0x0080 */
  FB_INT32 BoostInputAction; /* 0x00E4 */
  WeaponSlot BoostAbilityWeaponOverrideSlot; /* 0x00E8 */
  char pad_00EC[0x0004];
  FB_CSTRING BoostAbilityIconId; /* 0x00F0 */
  FB_INT32 DashInputAction; /* 0x00F8 */
  WeaponSlot DashAbilityWeaponOverrideSlot; /* 0x00FC */
  FB_CSTRING DashAbilityIconId; /* 0x0100 */
  FB_STDARRAY(FB_INT32) PostSwitchExcludedInputActions; /* 0x0108 */
  FB_FLOAT32 PostSwitchExcludeTime; /* 0x0110 */
  char pad_0114[0x0004];
  FB_STDARRAY(FB_INT32) RollingExcludedInputActions; /* 0x0118 */
  FB_STDARRAY(FB_INT32) BoostingExcludedInputActions; /* 0x0120 */
  FB_STDARRAY(FB_INT32) DashingExcludedInputActions; /* 0x0128 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0130 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterRollingComponentData) == 304);

}
