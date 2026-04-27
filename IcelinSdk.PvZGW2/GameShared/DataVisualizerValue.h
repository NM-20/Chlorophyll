#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F7B0
   RuntimeId:        12F2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8C88
   Default Value:    000000014284F7C8
*/
#pragma pack(push, 8)
struct DataVisualizerValue
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Value; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(DataVisualizerValue) == 8);

}
