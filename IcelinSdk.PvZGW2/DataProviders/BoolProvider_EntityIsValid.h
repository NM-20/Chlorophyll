#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834858
   RuntimeId:        0212
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1078
   VfTable:          00000001421ECC98
   Address (Base):   000000014311B8D0
*/
#pragma pack(push, 8)
class BoolProvider_EntityIsValid : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityProvider) Entity; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_EntityIsValid) == 24);

}
