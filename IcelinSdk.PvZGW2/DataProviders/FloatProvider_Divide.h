#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834E40
   RuntimeId:        026E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10CB
   VfTable:          00000001421EC850
   Address (Base):   000000014311AC70
*/
#pragma pack(push, 8)
class FloatProvider_Divide : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatProvider) A; /* 0x0010 */
  FB_HANDLE(class FloatProvider) B; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_Divide) == 32);

}
