#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EF28
   RuntimeId:        1275
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BA9A0
   Default Value:    0000000142BF4FF0
*/
#pragma pack(push, 4)
struct WarpAnimationBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef ConnectJointGroup; /* 0x0000 */
  AntRef ConnectJointWeight; /* 0x0014 */
  AntRef EnableAlign; /* 0x0028 */
  AntRef DisableCulling; /* 0x003C */
  AntRef TranslationYWarpTolerance; /* 0x0050 */
  AntRef AttachToAnimatableInstanceId; /* 0x0064 */
  AntRef JoinAttachment; /* 0x0078 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x008C */
#pragma pack(pop)

static_assert(sizeof(WarpAnimationBinding) == 140);

}
