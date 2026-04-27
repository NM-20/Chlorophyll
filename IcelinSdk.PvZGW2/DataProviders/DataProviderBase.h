#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834A18
   RuntimeId:        022E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1012
   VfTable:          00000001421ECB80
   Address (Base):   00000001430CEB70
*/
#pragma pack(push, 8)
class DataProviderBase : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(DataProviderBase) == 16);

}
