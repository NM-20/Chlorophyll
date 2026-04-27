#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/IntegerProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835080
   RuntimeId:        0292
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10BC
   VfTable:          00000001421EC6B8
   Address (Base):   000000014311A610
*/
#pragma pack(push, 8)
class IntegerProvider_Const : public IntegerProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 ConstValue; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(IntegerProvider_Const) == 24);

}
