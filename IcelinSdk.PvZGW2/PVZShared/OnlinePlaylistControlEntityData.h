#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FD08
   RuntimeId:        2932
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AB9
   VfTable:          000000014236DF80
   Address (Base):   00000001430E3EE0
*/
#pragma pack(push, 8)
class OnlinePlaylistControlEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(OnlinePlaylistControlEntityData) == 24);

}
