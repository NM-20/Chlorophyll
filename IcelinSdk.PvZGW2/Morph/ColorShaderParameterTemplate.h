#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Morph/ShaderParameterTemplate.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FAA8
   RuntimeId:        131F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0607
   VfTable:          00000001422771C0
   Address (Base):   00000001431105F0
*/
#pragma pack(push, 8)
class ColorShaderParameterTemplate : public ShaderParameterTemplate
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ColorPalette) Colors; /* 0x0020 */
  FB_INT32 Default; /* 0x0028 */
  char pad_002C[0x0004];
  FB_CSTRING PresentationName; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ColorShaderParameterTemplate) == 56);

}
