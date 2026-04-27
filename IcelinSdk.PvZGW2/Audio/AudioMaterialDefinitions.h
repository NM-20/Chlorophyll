#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428365D0
   RuntimeId:        03D9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07E1
   VfTable:          00000001421F4B68
   Address (Base):   0000000143118C30
*/
#pragma pack(push, 8)
class AudioMaterialDefinitions : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AudioMaterialDefinitions) == 24);

}
