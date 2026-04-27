#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C9B8
   RuntimeId:        107E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BADC0
   Default Value:    000000014284C9D0
*/
#pragma pack(push, 8)
struct UnlockIdTable
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(FB_UINT32) Identifiers; /* 0x0000 */
  FB_STDARRAY(FB_UINT32) NonSharedIdentifiers; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UnlockIdTable) == 16);

}
