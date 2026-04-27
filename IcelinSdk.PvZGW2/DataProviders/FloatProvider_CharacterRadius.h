#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834FA0
   RuntimeId:        0284
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10D8
   VfTable:          00000001421EC748
   Address (Base):   000000014311A850
*/
#pragma pack(push, 8)
class FloatProvider_CharacterRadius : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityProvider) Entity; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_CharacterRadius) == 24);

}
