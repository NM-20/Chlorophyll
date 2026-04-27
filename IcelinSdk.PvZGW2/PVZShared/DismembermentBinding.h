#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863C48
   RuntimeId:        2161
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9400
   Default Value:    0000000142BFEA10
*/
#pragma pack(push, 4)
struct DismembermentBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef HideFaceProp; /* 0x0000 */
  AntRef HideHeadProp; /* 0x0014 */
  AntRef HideHead; /* 0x0028 */
  AntRef HideBodyProp; /* 0x003C */
  AntRef HideHipsProp; /* 0x0050 */
  AntRef HideLeftArm; /* 0x0064 */
  AntRef HideLeftHandProp; /* 0x0078 */
  AntRef HideRightArm; /* 0x008C */
  AntRef HideRightHandProp; /* 0x00A0 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B4 */
#pragma pack(pop)

static_assert(sizeof(DismembermentBinding) == 180);

}
