#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869818
   RuntimeId:        24C9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EFE
   VfTable:          0000000142355AC8
   Address (Base):   00000001430D9B90
*/
#pragma pack(push, 8)
class BuffWeaponData : public WeaponData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BuffData) OwnerBuff; /* 0x0018 */
  FB_HANDLE(class BuffData) TargetBuff; /* 0x0020 */
  FB_FLOAT32 MinDistance; /* 0x0028 */
  FB_FLOAT32 MaxDistance; /* 0x002C */
  FB_FLOAT32 TargetAngle; /* 0x0030 */
  FB_BOOLEAN PreferDamagedTargets; /* 0x0034 */
  FB_BOOLEAN TargetNeutral; /* 0x0035 */
  FB_BOOLEAN TargetFriendly; /* 0x0036 */
  FB_BOOLEAN TargetHostile; /* 0x0037 */
  FB_BOOLEAN TargetAliveOnly; /* 0x0038 */
  FB_BOOLEAN AllowImmortalTargets; /* 0x0039 */
  char pad_003A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(BuffWeaponData) == 64);

}
