#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Morph/ShaderParameterTemplate.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FAF8
   RuntimeId:        1323
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0606
   VfTable:          0000000142277190
   Address (Base):   0000000143110590
*/
#pragma pack(push, 8)
class TextureShaderParameterTemplate : public ShaderParameterTemplate
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct TextureContainer) TextureList; /* 0x0020 */
  FB_CSTRING PresentationName; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(TextureShaderParameterTemplate) == 48);

}
