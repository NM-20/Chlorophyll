#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849040
   RuntimeId:        0D48
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07A8
   VfTable:          00000001422604F8
   Address (Base):   00000001431148B0
*/
#pragma pack(push, 8)
class FaceAnimationWaveMappingsAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class FaceAnimationWaveMappings) Mappings; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(FaceAnimationWaveMappingsAsset) == 32);

}
