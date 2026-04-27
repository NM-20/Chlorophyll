#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FE08
   RuntimeId:        2942
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B83E0
   Default Value:    0000000142BFEEB0
*/
#pragma pack(push, 4)
struct SimpleMeleeComponentBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef TriggerMelee; /* 0x0000 */
  AntRef IsRecovering; /* 0x0014 */
  AntRef IsAttackerInSpecialMode; /* 0x0028 */
  AntRef IsDefenderImmobilized; /* 0x003C */
  AntRef IsImmobilizedSpikeweed; /* 0x0050 */
  AntRef IsAttacker; /* 0x0064 */
  AntRef IsDefender; /* 0x0078 */
  AntRef IsMeleeActive; /* 0x008C */
  AntRef DistanceNormalized; /* 0x00A0 */
  AntRef DefenderHeightOffset; /* 0x00B4 */
  AntRef MeleeAngle; /* 0x00C8 */
  AntRef InTemptingRange; /* 0x00DC */
  AntRef NormalizedTemptingDistance; /* 0x00F0 */
  AntRef TongueBonePos0; /* 0x0104 */
  AntRef TongueBonePos1; /* 0x0118 */
  AntRef TongueBonePos2; /* 0x012C */
  AntRef TongueBonePos3; /* 0x0140 */
  AntRef IsStriking; /* 0x0154 */
  AntRef HideDefender; /* 0x0168 */
  AntRef IsDefenderImmune; /* 0x017C */
  AntRef IsDefenderEscaping; /* 0x0190 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01A4 */
#pragma pack(pop)

static_assert(sizeof(SimpleMeleeComponentBinding) == 420);

}
