#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/MirrorDamageTrapezoid.h>
#include <IcelinSdk.PvZGW2/GameShared/DamageType.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863B08
   RuntimeId:        214D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D26
   VfTable:          0000000142353568
   Address (Base):   00000001430D5710
*/
#pragma pack(push, 16)
class TrapezoidDamageComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  MirrorDamageTrapezoid DamageTrapezoid; /* 0x0070 */
  DamageType DamageType; /* 0x00C0 */
  FB_FLOAT32 DamageMultiplier; /* 0x00C4 */
  MaterialDecl MaterialPair; /* 0x00C8 */
  char pad_00CC[0x0004];
  FB_HANDLE(class BuffData) Buff; /* 0x00D0 */
  FB_BOOLEAN GroupDamage; /* 0x00D8 */
  char pad_00D9[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(TrapezoidDamageComponentData) == 224);

}
