#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428738E8
   RuntimeId:        2BFC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0807
   VfTable:          0000000142378F78
   Address (Base):   0000000143104530
*/
#pragma pack(push, 8)
class AITypeFilterList : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct AITypeFilterWrapper) TypeFilters; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AITypeFilterList) == 32);

}
