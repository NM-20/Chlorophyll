#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/Ps3ServiceId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858C78
   RuntimeId:        1A8B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C66C8
   Default Value:    0000000142858C90
*/
#pragma pack(push, 8)
struct Ps3ServiceSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Region; /* 0x0000 */
  FB_CSTRING ProductCode; /* 0x0008 */
  FB_CSTRING PrimaryProductCode; /* 0x0010 */
  Ps3ServiceId TicketingService; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(Ps3ServiceSettings) == 40);

}
