#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835040
   RuntimeId:        028E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10E0
   VfTable:          00000001421EC6E8
   Address (Base):   000000014311A6D0
*/
#pragma pack(push, 8)
class FloatProvider_Lerp : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatProvider) A; /* 0x0010 */
  FB_HANDLE(class FloatProvider) B; /* 0x0018 */
  FB_HANDLE(class FloatProvider) T; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_Lerp) == 40);

}
