#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 00000001428628B8
   RuntimeId:        2096
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9580
   Default Value:    0000000142BFE720
*/
#pragma pack(push, 4)
struct PVZSpawningAnimationSignalBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef IsSpawning; /* 0x0000 */
  AntRef SpawningTime; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZSpawningAnimationSignalBinding) == 40);

}
