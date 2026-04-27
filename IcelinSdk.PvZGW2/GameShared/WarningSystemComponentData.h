#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/GameShared/WarningPlayerType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EF00
   RuntimeId:        1273
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DB9
   VfTable:          0000000142274778
   Address (Base):   00000001430D6070
*/
#pragma pack(push, 16)
class WarningSystemComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundAsset) AimWarnSoundEffect; /* 0x0070 */
  FB_HANDLE(class SoundAsset) MissileWarnSoundEffect; /* 0x0078 */
  FB_HANDLE(class SoundAsset) LowHealthWarnSoundEffect; /* 0x0080 */
  FB_HANDLE(class SoundAsset) LockingWarnSoundEffect; /* 0x0088 */
  FB_HANDLE(class SoundAsset) LockedWarnSoundEffect; /* 0x0090 */
  WarningPlayerType PlayerType; /* 0x0098 */
  char pad_009C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(WarningSystemComponentData) == 160);

}
