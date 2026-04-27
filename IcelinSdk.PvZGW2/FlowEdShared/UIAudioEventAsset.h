#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856BE8
   RuntimeId:        1941
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          065D
   VfTable:          00000001422CB4F8
   Address (Base):   000000014310D290
*/
#pragma pack(push, 8)
class UIAudioEventAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct UIAudioEventMapping) AudioEventMappings; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIAudioEventAsset) == 32);

}
