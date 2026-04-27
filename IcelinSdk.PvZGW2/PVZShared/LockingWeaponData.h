#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponData.h>
#include <IcelinSdk.PvZGW2/PVZShared/WarnTarget.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B4F0
   RuntimeId:        2628
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EFF
   VfTable:          000000014235ABF0
   Address (Base):   00000001430D99B0
*/
#pragma pack(push, 8)
class LockingWeaponData : public WeaponData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class LockingControllerData) LockingController; /* 0x0018 */
  FB_HANDLE(class LockingControllerData) SecondaryLockingController; /* 0x0020 */
  WarnTarget WarnLock; /* 0x0028 */
  FB_BOOLEAN OverrideLockingControllerSettings; /* 0x002C */
  FB_BOOLEAN IsHoming; /* 0x002D */
  FB_BOOLEAN FireOnlyWhenLockedOn; /* 0x002E */
  char pad_002F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(LockingWeaponData) == 48);

}
