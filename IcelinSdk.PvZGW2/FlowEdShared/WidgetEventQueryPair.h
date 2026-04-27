#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIWidgetEventID.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856D78
   RuntimeId:        1959
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C70C8
   Default Value:    0000000142856D90
*/
#pragma pack(push, 8)
struct WidgetEventQueryPair
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  UIWidgetEventID Query; /* 0x0008 */
  char pad_000C[0x0004];
  FB_CSTRING InstanceName; /* 0x0010 */
  FB_BOOLEAN IsOutput; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WidgetEventQueryPair) == 32);

}
