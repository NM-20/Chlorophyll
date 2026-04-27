#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/DataProviderBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834A58
   RuntimeId:        0232
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1013
   VfTable:          00000001421ECB58
   Address (Base):   00000001430B5A10
*/
#pragma pack(push, 8)
class BoolProvider : public DataProviderBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider) == 16);

}
