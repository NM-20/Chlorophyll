#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869F68
   RuntimeId:        253D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07E0
   VfTable:          00000001423557E0
   Address (Base):   0000000143106D50
*/
#pragma pack(push, 8)
class UserInboxMessageAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UserInboxMessageAsset) == 24);

}
