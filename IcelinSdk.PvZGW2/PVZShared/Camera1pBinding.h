#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863FD8
   RuntimeId:        2199
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4A08
   Default Value:    0000000142BFEB20
*/
#pragma pack(push, 4)
struct Camera1pBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef Render1pInBackground; /* 0x0000 */
  AntRef ForceRender1pInForeground; /* 0x0014 */
  AntRef ForceAnimatedCamera; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x003C */
#pragma pack(pop)

static_assert(sizeof(Camera1pBinding) == 60);

}
