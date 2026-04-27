#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E508
   RuntimeId:        11ED
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8F28
   Default Value:    0000000142BF4FB0
*/
#pragma pack(push, 4)
struct CameraBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef Render1pInBackground; /* 0x0000 */
  AntRef ForceRender1pInForeground; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(CameraBinding) == 40);

}
