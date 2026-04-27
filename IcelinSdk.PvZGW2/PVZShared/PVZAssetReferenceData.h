#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865E88
   RuntimeId:        235B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C64
   VfTable:          0000000142350A10
   Address (Base):   0000000143107E30
*/
#pragma pack(push, 8)
class PVZAssetReferenceData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class Asset) ReferencedAssets; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZAssetReferenceData) == 32);

}
