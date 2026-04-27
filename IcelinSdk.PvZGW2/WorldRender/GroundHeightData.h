#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855838
   RuntimeId:        184C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9EC0
   Default Value:    0000000142855850
*/
#pragma pack(push, 8)
struct GroundHeightData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 WorldSize; /* 0x0000 */
  Vec2 HeightSpan; /* 0x0004 */
  char pad_000C[0x0004];
  FB_STDARRAY(FB_UINT16) Data; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(GroundHeightData) == 24);

}
