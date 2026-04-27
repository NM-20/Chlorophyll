#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TransformLayerData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854AA8
   RuntimeId:        1799
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CED
   VfTable:          00000001422B5868
   Address (Base):   00000001430EA4E0
*/
#pragma pack(push, 8)
class ScaleTransformLayerData : public TransformLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatTrackData) ScaleX; /* 0x0038 */
  FB_HANDLE(class FloatTrackData) ScaleY; /* 0x0040 */
  FB_HANDLE(class FloatTrackData) ScaleZ; /* 0x0048 */
  FB_BOOLEAN IsUniform; /* 0x0050 */
  char pad_0051[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(ScaleTransformLayerData) == 88);

}
