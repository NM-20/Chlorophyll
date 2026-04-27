#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 00000001428625F8
   RuntimeId:        206A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9680
   Default Value:    0000000142BFE3D0
*/
#pragma pack(push, 4)
struct PVZCharacterAntBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef LeftRightAimSpeed; /* 0x0000 */
  AntRef HideWeaponDefault; /* 0x0014 */
  AntRef HideBodyPropDefault; /* 0x0028 */
  AntRef WaitingForAttachment; /* 0x003C */
  AntRef DoAttachment; /* 0x0050 */
  AntRef DoneAttachment; /* 0x0064 */
  AntRef WaitingForAttachTimer; /* 0x0078 */
  AntRef StartedDetachmentPhase; /* 0x008C */
  AntRef CompletedDetachmentPhase; /* 0x00A0 */
  AntRef CompletedDetachmentPhaseTimer; /* 0x00B4 */
  AntRef Detached; /* 0x00C8 */
  AntRef InactivityTimer; /* 0x00DC */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterAntBinding) == 240);

}
