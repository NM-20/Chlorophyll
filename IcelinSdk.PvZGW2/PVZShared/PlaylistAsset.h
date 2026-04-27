#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862310
   RuntimeId:        2040
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          067E
   VfTable:          0000000142343EF8
   Address (Base):   0000000143108A30
*/
#pragma pack(push, 8)
class PlaylistAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PlaylistAsset) == 24);

}
