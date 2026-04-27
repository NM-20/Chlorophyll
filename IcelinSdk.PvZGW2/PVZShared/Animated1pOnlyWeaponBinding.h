#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FEF8
   RuntimeId:        294B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B83C0
   Default Value:    0000000142BFF060
*/
#pragma pack(push, 4)
struct Animated1pOnlyWeaponBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef UndeployFinished; /* 0x0000 */
  AntRef CameraFreeWeight; /* 0x0014 */
  AntRef Deploy1P; /* 0x0028 */
  AntRef HideWeapon1p; /* 0x003C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(Animated1pOnlyWeaponBinding) == 80);

}
