#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 00000001428627D8
   RuntimeId:        2088
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9620
   Default Value:    0000000142BFE3A8
*/
#pragma pack(push, 4)
struct PVZGameStateCopyAntBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef CopyEnabled; /* 0x0000 */
  AntRef CopyFromAntId; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZGameStateCopyAntBinding) == 40);

}
