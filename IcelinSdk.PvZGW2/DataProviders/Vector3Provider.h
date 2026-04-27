#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/DataProviderBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834AB8
   RuntimeId:        0238
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10A5
   VfTable:          00000001421ECB10
   Address (Base):   00000001430B7590
*/
#pragma pack(push, 8)
class Vector3Provider : public DataProviderBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(Vector3Provider) == 16);

}
