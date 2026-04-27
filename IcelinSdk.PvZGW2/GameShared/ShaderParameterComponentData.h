#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E598
   RuntimeId:        11F3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D3D
   VfTable:          00000001422731E8
   Address (Base):   00000001430EC460
*/
#pragma pack(push, 16)
class ShaderParameterComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct ShaderParameterVector) ShaderParameterVectors; /* 0x0070 */
  FB_STDARRAY(struct ShaderParameterTexture) ShaderParameterTexture; /* 0x0078 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(ShaderParameterComponentData) == 128);

}
