#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 00000001428640F8
   RuntimeId:        21AB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9340
   Default Value:    0000000142BFEBB0
*/
#pragma pack(push, 4)
struct PVZCharacterScalingBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef CharacterScale; /* 0x0000 */
  AntRef CharacterLocoScale; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterScalingBinding) == 40);

}
