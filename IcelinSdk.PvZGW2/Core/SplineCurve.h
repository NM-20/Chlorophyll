#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Core/SplineType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832E60
   RuntimeId:        00D8
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B6A78
   Default Value:    0000000142832E90
*/
#pragma pack(push, 16)
struct SplineCurve
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec4 XValues0; /* 0x0000 */
  Vec4 XValues1; /* 0x0010 */
  Vec4 XValues2; /* 0x0020 */
  Vec4 YValues0; /* 0x0030 */
  Vec4 YValues1; /* 0x0040 */
  Vec4 YValues2; /* 0x0050 */
  Vec4 YValues3; /* 0x0060 */
  Vec4 GValues0; /* 0x0070 */
  Vec4 GValues1; /* 0x0080 */
  Vec4 GValues2; /* 0x0090 */
  Vec4 GValues3; /* 0x00A0 */
  Vec4 GValues4; /* 0x00B0 */
  Vec4 GValues5; /* 0x00C0 */
  SplineType SplineType; /* 0x00D0 */
  char pad_00D4[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(SplineCurve) == 224);

}
