#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/TransformProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835220
   RuntimeId:        02AC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          109E
   VfTable:          00000001421EC580
   Address (Base):   000000014311A130
*/
#pragma pack(push, 8)
class TransformProvider_Select : public TransformProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class TransformProvider) Transforms; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TransformProvider_Select) == 24);

}
