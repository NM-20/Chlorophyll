#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428768B8
   RuntimeId:        2DEB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E06
   VfTable:          0000000142392F30
   Address (Base):   00000001430E0CA0
*/
#pragma pack(push, 8)
class UIElementTrigger : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UIElementTrigger) == 16);

}
