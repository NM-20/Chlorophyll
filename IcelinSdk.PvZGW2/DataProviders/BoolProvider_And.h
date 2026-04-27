#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834738
   RuntimeId:        0200
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          107A
   VfTable:          00000001421ECD28
   Address (Base):   000000014311BB10
*/
#pragma pack(push, 8)
class BoolProvider_And : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class BoolProvider) Params; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_And) == 24);

}
