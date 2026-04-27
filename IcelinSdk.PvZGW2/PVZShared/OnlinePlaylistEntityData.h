#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FD28
   RuntimeId:        2934
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A1E
   VfTable:          000000014236DF18
   Address (Base):   00000001430E3E80
*/
#pragma pack(push, 8)
class OnlinePlaylistEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Category; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(OnlinePlaylistEntityData) == 32);

}
