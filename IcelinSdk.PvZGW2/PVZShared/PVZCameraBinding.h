#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864018
   RuntimeId:        219D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9360
   Default Value:    0000000142BFEB88
*/
#pragma pack(push, 4)
struct PVZCameraBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef PreventAnimatableCameraAnchor; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(PVZCameraBinding) == 20);

}
