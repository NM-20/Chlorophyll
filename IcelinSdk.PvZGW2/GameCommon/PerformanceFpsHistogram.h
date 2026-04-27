#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428433F0
   RuntimeId:        0B90
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CB208
   Default Value:    0000000142BA0790
*/
#pragma pack(push, 4)
struct PerformanceFpsHistogram
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Below5; /* 0x0000 */
  FB_FLOAT32 Below10; /* 0x0004 */
  FB_FLOAT32 Below15; /* 0x0008 */
  FB_FLOAT32 Below20; /* 0x000C */
  FB_FLOAT32 Below25; /* 0x0010 */
  FB_FLOAT32 Below30; /* 0x0014 */
  FB_FLOAT32 Below35; /* 0x0018 */
  FB_FLOAT32 Below40; /* 0x001C */
  FB_FLOAT32 Below45; /* 0x0020 */
  FB_FLOAT32 Below50; /* 0x0024 */
  FB_FLOAT32 Below55; /* 0x0028 */
  FB_FLOAT32 Below60; /* 0x002C */
  FB_FLOAT32 Above60; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0034 */
#pragma pack(pop)

static_assert(sizeof(PerformanceFpsHistogram) == 52);

}
