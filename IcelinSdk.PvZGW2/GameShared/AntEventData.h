#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EventSpec.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D280
   RuntimeId:        10F1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9128
   Default Value:    0000000142BA4870
*/
#pragma pack(push, 4)
struct AntEventData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 TagId; /* 0x0000 */
  EventSpec Event; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(AntEventData) == 8);

}
