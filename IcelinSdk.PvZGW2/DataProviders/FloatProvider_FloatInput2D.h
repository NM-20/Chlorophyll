#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834F20
   RuntimeId:        027C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10DF
   VfTable:          00000001421EC7A8
   Address (Base):   000000014311A9D0
*/
#pragma pack(push, 8)
class FloatProvider_FloatInput2D : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityProvider) Entity; /* 0x0010 */
  FB_INT32 ActionXAxis; /* 0x0018 */
  FB_INT32 ActionYAxis; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_FloatInput2D) == 32);

}
