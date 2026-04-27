#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/DataProviderBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834A98
   RuntimeId:        0236
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10B5
   VfTable:          00000001421ECB28
   Address (Base):   00000001430BF1F0
*/
#pragma pack(push, 8)
class IntegerProvider : public DataProviderBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(IntegerProvider) == 16);

}
