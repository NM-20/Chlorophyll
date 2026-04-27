#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A768
   RuntimeId:        07F1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCB68
   Default Value:    0000000142B97D98
*/
#pragma pack(push, 4)
struct LinkChannel
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Realm Realm; /* 0x0000 */
  FB_INT32 Id; /* 0x0004 */
  FB_INT32 LinkTypeHash; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(LinkChannel) == 12);

}
