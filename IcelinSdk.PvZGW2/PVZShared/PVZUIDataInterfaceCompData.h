#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870448
   RuntimeId:        2983
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0753
   VfTable:          000000014236D990
   Address (Base):   00000001431051F0
*/
#pragma pack(push, 8)
class PVZUIDataInterfaceCompData : public UIComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZUIDataInterfaceCompData) == 48);

}
