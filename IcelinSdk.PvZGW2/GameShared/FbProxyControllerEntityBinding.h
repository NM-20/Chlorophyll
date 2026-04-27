#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A9E0
   RuntimeId:        0EBF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB380
   Default Value:    0000000142BF4D00
*/
#pragma pack(push, 4)
struct FbProxyControllerEntityBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef Trigger; /* 0x0000 */
  AntRef Stop; /* 0x0014 */
  AntRef BlendInTime; /* 0x0028 */
  AntRef BlendOutTime; /* 0x003C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(FbProxyControllerEntityBinding) == 80);

}
