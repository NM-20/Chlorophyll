#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E480
   RuntimeId:        11E9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAAE0
   Default Value:    000000014284E498
*/
#pragma pack(push, 8)
struct InputSuppressionData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(struct ActionSuppressor) SuppressVehicleInput; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(InputSuppressionData) == 8);

}
