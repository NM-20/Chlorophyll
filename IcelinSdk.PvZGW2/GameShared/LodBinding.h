#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F5E8
   RuntimeId:        12D7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BA900
   Default Value:    0000000142BF5160
*/
#pragma pack(push, 4)
struct LodBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef DisableControllerUpdate; /* 0x0000 */
  AntRef DisablePoseUpdate; /* 0x0014 */
  AntRef DistanceFromCamera; /* 0x0028 */
  AntRef AnimatableInstanceId; /* 0x003C */
  AntRef ResetController; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0064 */
#pragma pack(pop)

static_assert(sizeof(LodBinding) == 100);

}
