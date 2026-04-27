#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F190
   RuntimeId:        1293
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          068F
   VfTable:          00000001422769C0
   Address (Base):   0000000143110DD0
*/
#pragma pack(push, 8)
class CutsceneImportSettings : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct DCCActorMappings) ActorRows; /* 0x0018 */
  FB_STDARRAY(struct DCCQualityToCodecSettings) QualityRows; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(CutsceneImportSettings) == 40);

}
