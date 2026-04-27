#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865718
   RuntimeId:        22E7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AA9
   VfTable:          00000001423512C8
   Address (Base):   00000001430E5980
*/
#pragma pack(push, 8)
class ClientThirdPartyPromotionsEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING PromotionId; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ClientThirdPartyPromotionsEntityData) == 32);

}
