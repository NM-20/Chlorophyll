#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FF18
   RuntimeId:        294D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B83A0
   Default Value:    0000000142BFF0B0
*/
#pragma pack(push, 4)
struct Animated3pOnlyWeaponBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef Deploy3P; /* 0x0000 */
  AntRef HideWeapon3p; /* 0x0014 */
  AntRef WeaponAssembled3p; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x003C */
#pragma pack(pop)

static_assert(sizeof(Animated3pOnlyWeaponBinding) == 60);

}
