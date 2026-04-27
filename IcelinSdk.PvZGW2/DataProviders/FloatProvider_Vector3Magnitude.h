#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834EC0
   RuntimeId:        0276
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10C2
   VfTable:          00000001421EC7F0
   Address (Base):   000000014311AAF0
*/
#pragma pack(push, 8)
class FloatProvider_Vector3Magnitude : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class Vector3Provider) Vector; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_Vector3Magnitude) == 24);

}
