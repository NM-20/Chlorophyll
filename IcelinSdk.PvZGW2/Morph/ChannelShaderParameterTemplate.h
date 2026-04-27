#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Morph/ShaderParameterTemplate.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FA88
   RuntimeId:        131D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0605
   VfTable:          00000001422771B0
   Address (Base):   0000000143110650
*/
#pragma pack(push, 16)
class ChannelShaderParameterTemplate : public ShaderParameterTemplate
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec4 Default; /* 0x0020 */
  FB_CSTRING PresentationName; /* 0x0030 */
  FB_BOOLEAN AlphaEnabled; /* 0x0038 */
  char pad_0039[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ChannelShaderParameterTemplate) == 64);

}
