#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UILegacyScreenRenderPropertyEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876B18
   RuntimeId:        2E11
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C72
   VfTable:          0000000142392DF8
   Address (Base):   00000001430E0160
*/
#pragma pack(push, 8)
class UILegacyScreenRenderVec4PropertyEntityData : public UILegacyScreenRenderPropertyEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UILegacyScreenRenderVec4PropertyEntityData) == 32);

}
