#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834718
   RuntimeId:        01FE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          106F
   VfTable:          00000001421ECD40
   Address (Base):   000000014311BB70
*/
#pragma pack(push, 8)
class BoolProvider_False : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_False) == 16);

}
