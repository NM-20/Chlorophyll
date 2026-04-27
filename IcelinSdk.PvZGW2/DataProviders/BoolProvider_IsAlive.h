#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834938
   RuntimeId:        0220
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          106C
   VfTable:          00000001421ECC08
   Address (Base):   000000014311B690
*/
#pragma pack(push, 8)
class BoolProvider_IsAlive : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityProvider) Entity; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_IsAlive) == 24);

}
