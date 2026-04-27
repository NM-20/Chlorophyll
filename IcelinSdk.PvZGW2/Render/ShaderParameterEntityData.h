#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Render/ShaderParameterDataType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853630
   RuntimeId:        167E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BF6
   VfTable:          00000001422A1310
   Address (Base):   00000001430DB150
*/
#pragma pack(push, 16)
class ShaderParameterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 ParameterHandle; /* 0x0018 */
  char pad_001C[0x0004];
  Vec4 VecParam; /* 0x0020 */
  ShaderParameterDataType ParameterType; /* 0x0030 */
  FB_BOOLEAN BoolParam; /* 0x0034 */
  char pad_0035[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ShaderParameterEntityData) == 64);

}
