#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UILegacyScreenRenderPropertyEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876AF8
   RuntimeId:        2E0F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C6D
   VfTable:          0000000142392CA8
   Address (Base):   00000001430E01C0
*/
#pragma pack(push, 8)
class UILegacyScreenRenderVec3PropertyEntityData : public UILegacyScreenRenderPropertyEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UILegacyScreenRenderVec3PropertyEntityData) == 32);

}
