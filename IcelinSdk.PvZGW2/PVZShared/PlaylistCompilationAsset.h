#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862330
   RuntimeId:        2042
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07D3
   VfTable:          0000000142343EE8
   Address (Base):   00000001431089D0
*/
#pragma pack(push, 8)
class PlaylistCompilationAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PlaylistCompilationAsset) == 24);

}
