#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Morph/MorphSliderType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FB98
   RuntimeId:        132D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E20
   VfTable:          0000000142277100
   Address (Base):   00000001430DB990
*/
#pragma pack(push, 8)
class MorphBaseSlider : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  MorphSliderType SliderType; /* 0x0010 */
  FB_FLOAT32 DefaultWeight; /* 0x0014 */
  FB_BOOLEAN DisableAdditiveBoneOffsets; /* 0x0018 */
  FB_BOOLEAN EnabledWithHair; /* 0x0019 */
  FB_BOOLEAN EnabledWithBeard; /* 0x001A */
  FB_BOOLEAN DebugOnly; /* 0x001B */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MorphBaseSlider) == 32);

}
