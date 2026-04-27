#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/IntegerProvider.h>

namespace fb
{

/* TypeInfo (Array): 00000001428350A0
   RuntimeId:        0294
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10BE
   VfTable:          00000001421EC6A0
   Address (Base):   000000014311A5B0
*/
#pragma pack(push, 8)
class IntegerProvider_FromFloat : public IntegerProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatProvider) Value; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(IntegerProvider_FromFloat) == 24);

}
