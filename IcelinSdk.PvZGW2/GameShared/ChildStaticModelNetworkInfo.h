#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/IndexRange.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B898
   RuntimeId:        0F8A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9348
   Default Value:    000000014284B8B0
*/
#pragma pack(push, 4)
struct ChildStaticModelNetworkInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  IndexRange NetworkRange; /* 0x0000 */
  FB_UINT32 ParentPartComponentIndex; /* 0x0008 */
  FB_UINT32 ParentHealthStateIndex; /* 0x000C */
  FB_UINT32 InstanceIndex; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(ChildStaticModelNetworkInfo) == 20);

}
