#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 00000001428705F8
   RuntimeId:        299D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BEE
   VfTable:          000000014236D720
   Address (Base):   00000001430E2CE0
*/
#pragma pack(push, 16)
class PVZUICustomize3DModelEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 CharacterRotation; /* 0x0020 */
  LinearTransform CharacterSpawnTransform; /* 0x0030 */
  FB_STDARRAY(struct PreviewCameraOffsets) PerTeamCameraOffsets; /* 0x0070 */
  FB_FLOAT32 CharacterRotationSpeed; /* 0x0078 */
  FB_FLOAT32 ScreenOffsetChangeSpeed; /* 0x007C */
  FB_FLOAT32 MouseRotationMultiplier; /* 0x0080 */
  FB_UINT32 HighlightedClassIndex; /* 0x0084 */
  FB_UINT32 HighlightedCostumeIndex; /* 0x0088 */
  FB_BOOLEAN HighlightedCostumeUnlocked; /* 0x008C */
  char pad_008D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(PVZUICustomize3DModelEntityData) == 144);

}
