#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/DataProviderBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834AD8
   RuntimeId:        023A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1093
   VfTable:          00000001421ECAF8
   Address (Base):   00000001430B6F70
*/
#pragma pack(push, 8)
class TransformProvider : public DataProviderBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TransformProvider) == 16);

}
