#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834EE0
   RuntimeId:        0278
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10D5
   VfTable:          00000001421EC7D8
   Address (Base):   000000014311AA90
*/
#pragma pack(push, 8)
class FloatProvider_Distance : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class Vector3Provider) A; /* 0x0010 */
  FB_HANDLE(class Vector3Provider) B; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_Distance) == 32);

}
