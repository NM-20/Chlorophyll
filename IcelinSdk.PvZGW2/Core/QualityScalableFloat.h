#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833628
   RuntimeId:        011D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B4BC0
   Default Value:    0000000142BEA4E8
*/
#pragma pack(push, 4)
struct QualityScalableFloat
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Low; /* 0x0000 */
  FB_FLOAT32 Medium; /* 0x0004 */
  FB_FLOAT32 High; /* 0x0008 */
  FB_FLOAT32 Ultra; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(QualityScalableFloat) == 16);

}
