#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850DA0
   RuntimeId:        140E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8968
   Default Value:    0000000142BA4E30
*/
#pragma pack(push, 16)
struct EdgeModelInstance
{
  typedef struct ValueTypeInfo TypeInfo_t;

  LinearTransform Transform; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(EdgeModelInstance) == 64);

}
