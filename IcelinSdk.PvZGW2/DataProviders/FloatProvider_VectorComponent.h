#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>
#include <IcelinSdk.PvZGW2/DataProviders/ComponentAxis.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835000
   RuntimeId:        028A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10D9
   VfTable:          00000001421EC718
   Address (Base):   000000014311A790
*/
#pragma pack(push, 8)
class FloatProvider_VectorComponent : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class Vector3Provider) Vector; /* 0x0010 */
  ComponentAxis Axis; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_VectorComponent) == 32);

}
