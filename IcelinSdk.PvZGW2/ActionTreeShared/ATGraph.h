#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832358
   RuntimeId:        002A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EE3
   VfTable:          00000001421E32B0
   Address (Base):   00000001430F3780
*/
#pragma pack(push, 8)
class ATGraph : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ATGraph) == 16);

}
