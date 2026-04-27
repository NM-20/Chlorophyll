#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>
#include <IcelinSdk.PvZGW2/Core/MultiPointLineType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832F98
   RuntimeId:        00DC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD828
   Default Value:    0000000142832E78
*/
#pragma pack(push, 4)
struct MultiPointLinePoint
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec2 Point; /* 0x0000 */
  MultiPointLineType LineType; /* 0x0008 */
  FB_FLOAT32 CurveScale; /* 0x000C */
  FB_BOOLEAN IsRegionBoundary; /* 0x0010 */
  char pad_0011[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(MultiPointLinePoint) == 20);

}
