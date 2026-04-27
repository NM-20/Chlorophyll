#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428339C8
   RuntimeId:        0151
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001428339E0
   Default Value:    0000000000000000
*/
#pragma pack(push, 16)
struct Mat4
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 m11; /* 0x0000 */
  FB_FLOAT32 m12; /* 0x0004 */
  FB_FLOAT32 m13; /* 0x0008 */
  FB_FLOAT32 m14; /* 0x000C */
  FB_FLOAT32 m21; /* 0x0010 */
  FB_FLOAT32 m22; /* 0x0014 */
  FB_FLOAT32 m23; /* 0x0018 */
  FB_FLOAT32 m24; /* 0x001C */
  FB_FLOAT32 m31; /* 0x0020 */
  FB_FLOAT32 m32; /* 0x0024 */
  FB_FLOAT32 m33; /* 0x0028 */
  FB_FLOAT32 m34; /* 0x002C */
  FB_FLOAT32 m41; /* 0x0030 */
  FB_FLOAT32 m42; /* 0x0034 */
  FB_FLOAT32 m43; /* 0x0038 */
  FB_FLOAT32 m44; /* 0x003C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(Mat4) == 64);

}
