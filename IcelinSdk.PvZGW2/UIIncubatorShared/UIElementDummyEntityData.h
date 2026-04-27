#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876998
   RuntimeId:        2DF9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BA7
   VfTable:          0000000142393000
   Address (Base):   00000001430E0400
*/
#pragma pack(push, 16)
class UIElementDummyEntityData : public UIElementEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(UIElementDummyEntityData) == 224);

}
