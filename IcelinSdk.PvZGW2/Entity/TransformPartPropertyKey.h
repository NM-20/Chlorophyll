#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/AnimTangentType.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C010
   RuntimeId:        0978
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CC8E8
   Default Value:    000000014283C028
*/
#pragma pack(push, 4)
struct TransformPartPropertyKey
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Value; /* 0x0000 */
  AnimTangentType InAnimTangentType; /* 0x0004 */
  FB_FLOAT32 InAngle; /* 0x0008 */
  FB_FLOAT32 InWeight; /* 0x000C */
  AnimTangentType OutAnimTangentType; /* 0x0010 */
  FB_FLOAT32 OutAngle; /* 0x0014 */
  FB_FLOAT32 OutWeight; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x001C */
#pragma pack(pop)

static_assert(sizeof(TransformPartPropertyKey) == 28);

}
