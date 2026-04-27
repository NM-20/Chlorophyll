#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EventSpec.h>
#include <IcelinSdk.PvZGW2/Entity/EventConnectionTargetType.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A4C8
   RuntimeId:        07C7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCBC8
   Default Value:    0000000142B97D70
*/
#pragma pack(push, 8)
struct EventConnection
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class DataContainer) Source; /* 0x0000 */
  FB_HANDLE(class DataContainer) Target; /* 0x0008 */
  EventSpec SourceEvent; /* 0x0010 */
  EventSpec TargetEvent; /* 0x0014 */
  EventConnectionTargetType TargetType; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(EventConnection) == 32);

}
