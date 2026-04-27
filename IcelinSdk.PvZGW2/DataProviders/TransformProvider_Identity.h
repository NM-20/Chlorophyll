#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/TransformProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835120
   RuntimeId:        029C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10A0
   VfTable:          00000001421EC640
   Address (Base):   000000014311A430
*/
#pragma pack(push, 8)
class TransformProvider_Identity : public TransformProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TransformProvider_Identity) == 16);

}
