#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870428
   RuntimeId:        2981
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0758
   VfTable:          000000014236DA10
   Address (Base):   00000001430F5650
*/
#pragma pack(push, 8)
class UIDirectAccessCompData : public UIComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIDirectAccessCompData) == 48);

}
