#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833608
   RuntimeId:        011B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B4F60
   Default Value:    0000000142B7DF58
*/
#pragma pack(push, 4)
struct QualityScalableInt
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 Low; /* 0x0000 */
  FB_INT32 Medium; /* 0x0004 */
  FB_INT32 High; /* 0x0008 */
  FB_INT32 Ultra; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(QualityScalableInt) == 16);

}
