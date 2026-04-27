#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/IntegerProvider.h>

namespace fb
{

/* TypeInfo (Array): 00000001428350E0
   RuntimeId:        0298
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10B7
   VfTable:          00000001421EC670
   Address (Base):   000000014311A4F0
*/
#pragma pack(push, 8)
class IntegerProvider_Multiply : public IntegerProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class IntegerProvider) Values; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(IntegerProvider_Multiply) == 24);

}
