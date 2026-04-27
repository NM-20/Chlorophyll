#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/ShieldComponentBinding.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863CC8
   RuntimeId:        2169
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D64
   VfTable:          0000000142353000
   Address (Base):   00000001430D54D0
*/
#pragma pack(push, 16)
class PVZShieldComponent2Data : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ObjectBlueprint) Shield; /* 0x0070 */
  ShieldComponentBinding ShieldBinding; /* 0x0078 */
  char pad_008C[0x0004];
  FB_STDARRAY(struct ShieldRigEntry) AnimRig; /* 0x0090 */
  FB_BOOLEAN UseCharacterBoneSpace; /* 0x0098 */
  FB_BOOLEAN BlockOwnerCharacterExplosionDamageWhenActive; /* 0x0099 */
  char pad_009A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(PVZShieldComponent2Data) == 160);

}
