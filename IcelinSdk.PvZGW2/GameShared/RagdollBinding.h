#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E1B0
   RuntimeId:        11C9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BABC0
   Default Value:    0000000142BF4F00
*/
#pragma pack(push, 4)
struct RagdollBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef RagdollOnBack; /* 0x0000 */
  AntRef RagdollBlend; /* 0x0014 */
  AntRef RagdollBlendEarly; /* 0x0028 */
  AntRef RagdollDisableBlendOnCollision; /* 0x003C */
  AntRef RagdollEnableGroundDetection; /* 0x0050 */
  AntRef RagdollActiveTime; /* 0x0064 */
  AntRef RagdollFullyBlendedIn; /* 0x0078 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x008C */
#pragma pack(pop)

static_assert(sizeof(RagdollBinding) == 140);

}
