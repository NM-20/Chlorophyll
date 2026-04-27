#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FDE8
   RuntimeId:        2940
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DC3
   VfTable:          000000014236DD00
   Address (Base):   00000001430CFD80
*/
#pragma pack(push, 16)
class SimpleMeleeComponentData : public ComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SimpleMeleeCommonData) CommonData; /* 0x0070 */
  FB_FLOAT32 MeleeRecoveryTime; /* 0x0078 */
  FB_FLOAT32 MeleeCloseAttackDistance; /* 0x007C */
  FB_FLOAT32 MeleeFarAttackDistance; /* 0x0080 */
  FB_FLOAT32 MeleeChargeDeathValueMultiplier; /* 0x0084 */
  FB_BOOLEAN IsEnabled; /* 0x0088 */
  char pad_0089[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(SimpleMeleeComponentData) == 144);

}
