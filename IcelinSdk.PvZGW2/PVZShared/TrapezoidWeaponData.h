#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponData.h>
#include <IcelinSdk.PvZGW2/GameShared/DamageType.h>
#include <IcelinSdk.PvZGW2/PVZShared/MirrorDamageTrapezoid.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869758
   RuntimeId:        24BD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F0A
   VfTable:          0000000142355C98
   Address (Base):   00000001430D9D10
*/
#pragma pack(push, 16)
class TrapezoidWeaponData : public WeaponData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  DamageType DamageType; /* 0x0018 */
  char pad_001C[0x0004];
  MirrorDamageTrapezoid DamageTrapezoid; /* 0x0020 */
  MaterialDecl MaterialPair; /* 0x0070 */
  char pad_0074[0x0004];
  FB_HANDLE(class BuffData) Buff; /* 0x0078 */
  FB_BOOLEAN GroupDamage; /* 0x0080 */
  char pad_0081[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(TrapezoidWeaponData) == 144);

}
