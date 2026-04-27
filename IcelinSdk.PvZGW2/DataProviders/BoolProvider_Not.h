#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834778
   RuntimeId:        0204
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          107B
   VfTable:          00000001421ECCF8
   Address (Base):   000000014311BA50
*/
#pragma pack(push, 8)
class BoolProvider_Not : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BoolProvider) Param; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_Not) == 24);

}
