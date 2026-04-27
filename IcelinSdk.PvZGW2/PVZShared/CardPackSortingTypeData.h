#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BC40
   RuntimeId:        2696
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11F0
   VfTable:          000000014235A8F8
   Address (Base):   0000000143106210
*/
#pragma pack(push, 8)
class CardPackSortingTypeData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(CardPackSortingTypeData) == 16);

}
