#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834E20
   RuntimeId:        026C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10C7
   VfTable:          00000001421EC868
   Address (Base):   000000014311ACD0
*/
#pragma pack(push, 8)
class FloatProvider_Multiply : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class FloatProvider) Values; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_Multiply) == 24);

}
