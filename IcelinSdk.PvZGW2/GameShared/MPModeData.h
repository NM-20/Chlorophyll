#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CEF8
   RuntimeId:        10C4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAE80
   Default Value:    0000000142BA4868
*/
#pragma pack(push, 4)
struct MPModeData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 VehiclePoints; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(MPModeData) == 4);

}
