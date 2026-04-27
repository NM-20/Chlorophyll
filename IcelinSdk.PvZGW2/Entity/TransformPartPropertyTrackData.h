#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PropertyTrackData.h>
#include <IcelinSdk.PvZGW2/Entity/TransformPart.h>
#include <IcelinSdk.PvZGW2/Entity/CurveInfinityType.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C050
   RuntimeId:        097A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FC0
   VfTable:          0000000142212270
   Address (Base):   00000001430FDBD0
*/
#pragma pack(push, 8)
class TransformPartPropertyTrackData : public PropertyTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_RESOURCEREF Resource; /* 0x0020 */
  TransformPart TransformPart; /* 0x0028 */
  CurveInfinityType PreInfinity; /* 0x002C */
  CurveInfinityType PostInfinity; /* 0x0030 */
  char pad_0034[0x0004];
  FB_STDARRAY(struct TransformPartPropertyKey) Values; /* 0x0038 */
  FB_FLOAT32 EvaluatorFps; /* 0x0040 */
  FB_UINT32 KeyStartIndex; /* 0x0044 */
  FB_UINT32 KeyCount; /* 0x0048 */
  FB_BOOLEAN Weighted; /* 0x004C */
  FB_BOOLEAN IsStatic; /* 0x004D */
  char pad_004E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(TransformPartPropertyTrackData) == 80);

}
