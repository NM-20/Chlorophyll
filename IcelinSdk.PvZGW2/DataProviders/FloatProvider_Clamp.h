#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834E60
   RuntimeId:        0270
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10C5
   VfTable:          00000001421EC838
   Address (Base):   000000014311AC10
*/
#pragma pack(push, 8)
class FloatProvider_Clamp : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatProvider) Value; /* 0x0010 */
  FB_HANDLE(class FloatProvider) Min; /* 0x0018 */
  FB_HANDLE(class FloatProvider) Max; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_Clamp) == 40);

}
