#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UILegacyScreenRenderPropertyEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876A58
   RuntimeId:        2E05
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C6F
   VfTable:          0000000142392CE0
   Address (Base):   00000001430E03A0
*/
#pragma pack(push, 8)
class UILegacyScreenRenderFloatPropertyEntityData : public UILegacyScreenRenderPropertyEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UILegacyScreenRenderFloatPropertyEntityData) == 32);

}
