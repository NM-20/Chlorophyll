#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EventSpec.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BD70
   RuntimeId:        094E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CC908
   Default Value:    0000000142B9BA20
*/
#pragma pack(push, 4)
struct SequenceEventData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  EventSpec Event; /* 0x0000 */
  FB_INT32 Time; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(SequenceEventData) == 8);

}
