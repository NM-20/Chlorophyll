#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849FF8
   RuntimeId:        0E36
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C96C8
   Default Value:    0000000142BA4838
*/
#pragma pack(push, 8)
struct RichPresenceContextSetting
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class RichPresenceContext) Context; /* 0x0000 */
  FB_HANDLE(class RichPresenceContextValue) Value; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(RichPresenceContextSetting) == 16);

}
