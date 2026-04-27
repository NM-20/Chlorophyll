#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284ED10
   RuntimeId:        11C5
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8FA8
   Default Value:    000000014284E180
*/
#pragma pack(push, 4)
struct ActionSuppressor
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 ActionToSuppress; /* 0x0000 */
  FB_FLOAT32 SuppressingValue; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(ActionSuppressor) == 8);

}
