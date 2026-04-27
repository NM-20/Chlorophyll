#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836930
   RuntimeId:        040F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07C4
   VfTable:          00000001421F4A18
   Address (Base):   00000001431185D0
*/
#pragma pack(push, 8)
class SoundMappingAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class SoundMapping) Mappings; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SoundMappingAsset) == 32);

}
