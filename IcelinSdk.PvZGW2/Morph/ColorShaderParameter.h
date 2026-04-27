#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Morph/Vec4ShaderParameter.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FB58
   RuntimeId:        1329
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EEF
   VfTable:          0000000142277160
   Address (Base):   0000000143110530
*/
#pragma pack(push, 16)
class ColorShaderParameter : public Vec4ShaderParameter
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 PaletteIndex; /* 0x0030 */
  char pad_0034[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ColorShaderParameter) == 64);

}
