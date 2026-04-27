#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869F28
   RuntimeId:        2539
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07BA
   VfTable:          00000001423557F0
   Address (Base):   0000000143106DB0
*/
#pragma pack(push, 8)
class TournamentAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TournamentAsset) == 24);

}
