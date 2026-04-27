#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B848
   RuntimeId:        0F86
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9368
   Default Value:    000000014284B860
*/
#pragma pack(push, 4)
struct PhysicsPartInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 PartComponentIndex; /* 0x0000 */
  FB_UINT32 HealthStateIndex; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(PhysicsPartInfo) == 8);

}
