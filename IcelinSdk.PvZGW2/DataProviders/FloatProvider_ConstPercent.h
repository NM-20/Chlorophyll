#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834DA0
   RuntimeId:        0264
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10C1
   VfTable:          00000001421EC8C8
   Address (Base):   000000014311AE50
*/
#pragma pack(push, 8)
class FloatProvider_ConstPercent : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Percent; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_ConstPercent) == 24);

}
