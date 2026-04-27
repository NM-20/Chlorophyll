#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BulletEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428695E8
   RuntimeId:        24AB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B13
   VfTable:          0000000142355CB8
   Address (Base):   00000001430D39D0
*/
#pragma pack(push, 16)
class SphereBulletEntityData : public BulletEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SphereBulletRadius; /* 0x01C0 */
  char pad_01C4[0x0004];
  FB_HANDLE(class BuffData) Buff; /* 0x01C8 */
  FB_HANDLE(class BuffData) DamagerBuff; /* 0x01D0 */
  FB_BOOLEAN SnapToGround; /* 0x01D8 */
  FB_BOOLEAN RestrictDamagerBuffToPlayerDamage; /* 0x01D9 */
  char pad_01DA[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01E0 */
#pragma pack(pop)

static_assert(sizeof(SphereBulletEntityData) == 480);

}
