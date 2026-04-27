#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858E38
   RuntimeId:        1AA1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9940
   Default Value:    0000000142BAB9C8
*/
#pragma pack(push, 8)
struct BlazeCreateGameParameters
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class GameParametersData) Base; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(BlazeCreateGameParameters) == 8);

}
