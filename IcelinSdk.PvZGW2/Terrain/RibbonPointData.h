#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854548
   RuntimeId:        173C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C78C8
   Default Value:    0000000142854560
*/
#pragma pack(push, 16)
struct RibbonPointData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec4 UserMaskLeft; /* 0x0000 */
  Vec4 UserMaskRight; /* 0x0010 */
  FB_FLOAT32 Left; /* 0x0020 */
  FB_FLOAT32 Right; /* 0x0024 */
  char pad_0028[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(RibbonPointData) == 48);

}
