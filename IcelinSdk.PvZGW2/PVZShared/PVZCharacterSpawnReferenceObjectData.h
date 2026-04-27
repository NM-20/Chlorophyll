#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CharacterSpawnReferenceObjectData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868DE0
   RuntimeId:        2431
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          098C
   VfTable:          0000000142356148
   Address (Base):   00000001430BCD90
*/
#pragma pack(push, 16)
class PVZCharacterSpawnReferenceObjectData : public CharacterSpawnReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LinearTransform ServerShootSpaceTransform; /* 0x01C0 */
  FB_FLOAT32 MaxLineOfSightTestDistance; /* 0x0200 */
  char pad_0204[0x0004];
  FB_HANDLE(class BehaviorTreeData) BehaviorTreeOverride; /* 0x0208 */
  FB_INT32 SpawnerID; /* 0x0210 */
  FB_FLOAT32 CullingDistance; /* 0x0214 */
  FB_FLOAT32 OverrideSpawnTime; /* 0x0218 */
  FB_BOOLEAN ExcludeFromSpawnManager; /* 0x021C */
  FB_BOOLEAN IsEpicSpawnPoint; /* 0x021D */
  FB_BOOLEAN IgnoreFromBossMode; /* 0x021E */
  FB_BOOLEAN CullingCheckLineOfSight; /* 0x021F */
  FB_BOOLEAN AllowScaledCharacterAnimation; /* 0x0220 */
  FB_BOOLEAN AllowFacingRelativeWeaponAiming; /* 0x0221 */
  char pad_0222[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0230 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterSpawnReferenceObjectData) == 560);

}
