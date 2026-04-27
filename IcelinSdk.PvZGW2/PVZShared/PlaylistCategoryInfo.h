#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FCE8
   RuntimeId:        2930
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08F3
   VfTable:          000000014236DF70
   Address (Base):   00000001430D9350
*/
#pragma pack(push, 8)
class PlaylistCategoryInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct PlaylistInfo) Playlists; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PlaylistCategoryInfo) == 24);

}
