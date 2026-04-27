#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871E40
   RuntimeId:        2AE5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BCC
   VfTable:          000000014236BDC8
   Address (Base):   00000001430E4000
*/
#pragma pack(push, 8)
class UIPlayerStatusItemData : public PVZUIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UIPlayerStatusItemData) == 72);

}
