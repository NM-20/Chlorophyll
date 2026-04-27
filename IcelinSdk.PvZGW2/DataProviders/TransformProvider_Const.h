#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/TransformProvider.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835140
   RuntimeId:        029E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1099
   VfTable:          00000001421EC628
   Address (Base):   000000014311A3D0
*/
#pragma pack(push, 16)
class TransformProvider_Const : public TransformProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LinearTransform Transform; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(TransformProvider_Const) == 80);

}
