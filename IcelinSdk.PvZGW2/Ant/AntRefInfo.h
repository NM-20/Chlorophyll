#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835518
   RuntimeId:        02DA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD468
   Default Value:    0000000142BEBD50
*/
#pragma pack(push, 4)
struct AntRefInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_GUID FrostbitePartition; /* 0x0000 */
  AntRef AntRef; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0024 */
#pragma pack(pop)

static_assert(sizeof(AntRefInfo) == 36);

}
