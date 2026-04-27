#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZSaveCategory.h>

namespace fb
{

/* TypeInfo (Array): 000000014286F188
   RuntimeId:        28D2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07D8
   VfTable:          000000014236E270
   Address (Base):   00000001430D31F0
*/
#pragma pack(push, 8)
class PVZSaveBaseAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZSaveCategory Category; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZSaveBaseAsset) == 32);

}
