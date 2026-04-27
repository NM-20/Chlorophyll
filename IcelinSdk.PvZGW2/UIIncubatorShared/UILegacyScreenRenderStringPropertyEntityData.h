#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UILegacyScreenRenderPropertyEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876AB8
   RuntimeId:        2E0B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C6E
   VfTable:          0000000142392C70
   Address (Base):   00000001430E0280
*/
#pragma pack(push, 8)
class UILegacyScreenRenderStringPropertyEntityData : public UILegacyScreenRenderPropertyEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UILegacyScreenRenderStringPropertyEntityData) == 32);

}
