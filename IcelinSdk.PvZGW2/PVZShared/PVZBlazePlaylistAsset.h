#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286F128
   RuntimeId:        28CC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0658
   VfTable:          000000014236E400
   Address (Base):   0000000143105490
*/
#pragma pack(push, 8)
class PVZBlazePlaylistAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZBlazePlaylistAsset) == 24);

}
