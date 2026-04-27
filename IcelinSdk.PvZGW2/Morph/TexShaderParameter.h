#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Morph/ShaderParameter.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FB78
   RuntimeId:        132B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EED
   VfTable:          0000000142277180
   Address (Base):   00000001431104D0
*/
#pragma pack(push, 8)
class TexShaderParameter : public ShaderParameter
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TextureAsset) Texture; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TexShaderParameter) == 32);

}
