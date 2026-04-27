#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834758
   RuntimeId:        0202
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1017
   VfTable:          00000001421ECD10
   Address (Base):   000000014311BAB0
*/
#pragma pack(push, 8)
class BoolProvider_Or : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class BoolProvider) Params; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_Or) == 24);

}
