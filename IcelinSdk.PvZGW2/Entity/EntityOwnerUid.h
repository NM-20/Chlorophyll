#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AAA8
   RuntimeId:        0825
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCAE8
   Default Value:    0000000142B97DB4
*/
#pragma pack(push, 4)
struct EntityOwnerUid
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 Id; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(EntityOwnerUid) == 4);

}
