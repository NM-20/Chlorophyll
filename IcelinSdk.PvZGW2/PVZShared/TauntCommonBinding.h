#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863840
   RuntimeId:        212A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9460
   Default Value:    0000000142BFE930
*/
#pragma pack(push, 4)
struct TauntCommonBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef IsPlaying; /* 0x0000 */
  AntRef Start; /* 0x0014 */
  AntRef ForceStop; /* 0x0028 */
  AntRef Length; /* 0x003C */
  AntRef TauntID; /* 0x0050 */
  AntRef TauntTime; /* 0x0064 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */
#pragma pack(pop)

static_assert(sizeof(TauntCommonBinding) == 120);

}
