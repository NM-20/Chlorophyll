#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/RichPresencePropertyType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A038
   RuntimeId:        0E3A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C96A8
   Default Value:    000000014284A050
*/
#pragma pack(push, 8)
struct RichPresenceProperty
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  RichPresencePropertyType PropertyType; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(RichPresenceProperty) == 16);

}
