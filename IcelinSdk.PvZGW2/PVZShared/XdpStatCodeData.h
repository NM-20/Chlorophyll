#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A028
   RuntimeId:        2549
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3668
   Default Value:    000000014286A040
*/
#pragma pack(push, 8)
struct XdpStatCodeData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING XdpCode; /* 0x0000 */
  FB_CSTRING StorageCode; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(XdpStatCodeData) == 16);

}
