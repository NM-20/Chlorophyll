#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Morph/MorphSliderType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FA48
   RuntimeId:        1319
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0604
   VfTable:          00000001422771E0
   Address (Base):   00000001430D5EF0
*/
#pragma pack(push, 8)
class ShaderParameterTemplate : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ParameterName; /* 0x0010 */
  MorphSliderType Category; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ShaderParameterTemplate) == 32);

}
