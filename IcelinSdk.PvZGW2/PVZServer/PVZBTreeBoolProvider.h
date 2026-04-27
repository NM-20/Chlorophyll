#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EBB8
   RuntimeId:        1CFF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1019
   VfTable:          000000014231E3F8
   Address (Base):   00000001430B46A0
*/
#pragma pack(push, 8)
class PVZBTreeBoolProvider : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZBTreeBoolProvider) == 16);

}
