#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 00000001428731D8
   RuntimeId:        2B90
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8040
   Default Value:    0000000142BFF6A8
*/
#pragma pack(push, 4)
struct TargetingComponentBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef AimingPitch; /* 0x0000 */
  AntRef AimingYaw; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TargetingComponentBinding) == 40);

}
