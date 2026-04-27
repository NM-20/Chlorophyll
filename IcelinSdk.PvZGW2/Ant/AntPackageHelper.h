#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428354F8
   RuntimeId:        02D8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          095B
   VfTable:          00000001421EFAC0
   Address (Base):   0000000143119AD0
*/
#pragma pack(push, 8)
class AntPackageHelper : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(AntPackageHelper) == 16);

}
