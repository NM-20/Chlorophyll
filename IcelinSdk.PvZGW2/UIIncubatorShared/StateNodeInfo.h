#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876548
   RuntimeId:        2DC4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0568
   Default Value:    0000000142876560
*/
#pragma pack(push, 8)
struct StateNodeInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING State; /* 0x0000 */
  FB_CSTRING StateDisplayName; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(StateNodeInfo) == 16);

}
