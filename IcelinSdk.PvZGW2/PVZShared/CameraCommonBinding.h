#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863FF8
   RuntimeId:        219B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C49E8
   Default Value:    0000000142BFEB60
*/
#pragma pack(push, 4)
struct CameraCommonBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef FirstPersonCameraHeight; /* 0x0000 */
  AntRef AnimatedCameraBlendTime; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(CameraCommonBinding) == 40);

}
