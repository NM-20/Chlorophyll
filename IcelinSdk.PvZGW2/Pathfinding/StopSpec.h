#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850508
   RuntimeId:        138D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8A08
   Default Value:    0000000142BA4A1E
*/
#pragma pack(push, 1)
struct StopSpec
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_BOOLEAN stopImmediately; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0001 */
#pragma pack(pop)

static_assert(sizeof(StopSpec) == 1);

}
