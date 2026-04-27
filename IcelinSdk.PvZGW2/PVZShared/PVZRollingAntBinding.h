#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863088
   RuntimeId:        20E6
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B94E0
   Default Value:    0000000142BFE860
*/
#pragma pack(push, 4)
struct PVZRollingAntBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef EnableRotation; /* 0x0000 */
  AntRef RotationX; /* 0x0014 */
  AntRef RotationY; /* 0x0028 */
  AntRef RotationZ; /* 0x003C */
  AntRef RotationW; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0064 */
#pragma pack(pop)

static_assert(sizeof(PVZRollingAntBinding) == 100);

}
