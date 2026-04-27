#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142842590
   RuntimeId:        0B6D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CB608
   Default Value:    00000001428425A8
*/
#pragma pack(push, 8)
struct BlueprintBundlePreloadInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  FB_INT32 Compartment; /* 0x0008 */
  FB_INT32 ParentCompartment; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(BlueprintBundlePreloadInfo) == 16);

}
