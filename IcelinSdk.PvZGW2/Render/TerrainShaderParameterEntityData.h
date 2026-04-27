#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428536A0
   RuntimeId:        1684
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C89
   VfTable:          00000001422A12D8
   Address (Base):   00000001430EACC0
*/
#pragma pack(push, 8)
class TerrainShaderParameterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct TerrainShaderParameter) ShaderParameters; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TerrainShaderParameterEntityData) == 32);

}
