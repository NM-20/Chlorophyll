#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Entity/GameplayBones.h>
#include <IcelinSdk.PvZGW2/PVZShared/ShieldComponentBinding.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863C28
   RuntimeId:        215F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D20
   VfTable:          0000000142353370
   Address (Base):   00000001430D55F0
*/
#pragma pack(push, 16)
class PVZShieldComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  GameplayBones ReferenceJoint; /* 0x0070 */
  char pad_0074[0x0004];
  FB_STDARRAY(struct PVZShieldState) ShieldStates; /* 0x0078 */
  ShieldComponentBinding ShieldBinding; /* 0x0080 */
  FB_BOOLEAN UseReferenceTransform; /* 0x0094 */
  FB_BOOLEAN IsAIFullBodyShield; /* 0x0095 */
  FB_BOOLEAN ShouldAIFaceAttack; /* 0x0096 */
  FB_BOOLEAN AutoDeployShield; /* 0x0097 */
  FB_BOOLEAN UseHealthThresholds; /* 0x0098 */
  char pad_0099[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(PVZShieldComponentData) == 160);

}
