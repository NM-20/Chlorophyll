#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863B48
   RuntimeId:        2151
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9440
   Default Value:    0000000142BFE9A8
*/
#pragma pack(push, 4)
struct SpecialModeBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef ActiveSpecialMode; /* 0x0000 */
  AntRef SpecialModeIsEntering; /* 0x0014 */
  AntRef SpecialModeAnimSpeed; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x003C */
#pragma pack(pop)

static_assert(sizeof(SpecialModeBinding) == 60);

}
