#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TransformLayerData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854A88
   RuntimeId:        1797
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CE7
   VfTable:          00000001422B5958
   Address (Base):   00000001430EA540
*/
#pragma pack(push, 8)
class KeyedTransformLayerData : public TransformLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatTrackData) TranslationX; /* 0x0038 */
  FB_HANDLE(class FloatTrackData) TranslationY; /* 0x0040 */
  FB_HANDLE(class FloatTrackData) TranslationZ; /* 0x0048 */
  FB_HANDLE(class FloatTrackData) RotationX; /* 0x0050 */
  FB_HANDLE(class FloatTrackData) RotationY; /* 0x0058 */
  FB_HANDLE(class FloatTrackData) RotationZ; /* 0x0060 */
  FB_BOOLEAN ForceMinimumRotationPathBetweenKeys; /* 0x0068 */
  char pad_0069[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(KeyedTransformLayerData) == 112);

}
