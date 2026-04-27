#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834DC0
   RuntimeId:        0266
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10CA
   VfTable:          00000001421EC8B0
   Address (Base):   000000014311ADF0
*/
#pragma pack(push, 8)
class FloatProvider_Negate : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatProvider) Value; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_Negate) == 24);

}
