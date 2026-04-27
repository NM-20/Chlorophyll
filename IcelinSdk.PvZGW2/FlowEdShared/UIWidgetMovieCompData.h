#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856910
   RuntimeId:        191D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0756
   VfTable:          00000001422CB5B0
   Address (Base):   000000014310D530
*/
#pragma pack(push, 8)
class UIWidgetMovieCompData : public UIComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIWidgetMovieCompData) == 48);

}
