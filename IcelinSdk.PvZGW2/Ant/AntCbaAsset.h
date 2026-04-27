#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835598
   RuntimeId:        02E2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07C9
   VfTable:          00000001421EFA88
   Address (Base):   0000000143119A70
*/
#pragma pack(push, 8)
class AntCbaAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AntCbaAsset) == 24);

}
