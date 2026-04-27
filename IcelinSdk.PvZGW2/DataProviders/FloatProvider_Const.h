#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834D80
   RuntimeId:        0262
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10C4
   VfTable:          00000001421EC8E0
   Address (Base):   0000000143100C90
*/
#pragma pack(push, 8)
class FloatProvider_Const : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ConstValue; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_Const) == 24);

}
