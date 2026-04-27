#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIGFxElement/UIGFxDataProviderEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875BB0
   RuntimeId:        2D4D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A8B
   VfTable:          000000014238DD10
   Address (Base):   00000001430E0DC0
*/
#pragma pack(push, 8)
class UITestDataProviderEntityData : public UIGFxDataProviderEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UITestDataProviderEntityData) == 24);

}
