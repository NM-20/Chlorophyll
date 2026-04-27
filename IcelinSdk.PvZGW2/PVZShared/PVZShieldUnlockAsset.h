#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZVisualUnlockAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869030
   RuntimeId:        2455
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          072A
   VfTable:          0000000142355FC8
   Address (Base):   00000001430F7B70
*/
#pragma pack(push, 8)
class PVZShieldUnlockAsset : public PVZVisualUnlockAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 CharacterScale; /* 0x0100 */
  char pad_0104[0x0004];
  FB_CSTRING BoneCollisionStateName; /* 0x0108 */
  FB_BOOLEAN ShouldAIFaceAttack; /* 0x0110 */
  FB_BOOLEAN IsAIFullBodyShield; /* 0x0111 */
  FB_BOOLEAN HideAttachments; /* 0x0112 */
  char pad_0113[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0118 */
#pragma pack(pop)

static_assert(sizeof(PVZShieldUnlockAsset) == 280);

}
