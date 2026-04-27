#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/PVZShared/MatchSyncType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865E68
   RuntimeId:        2359
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C40
   VfTable:          0000000142350890
   Address (Base):   00000001430D4D50
*/
#pragma pack(push, 8)
class MatchSyncEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  MatchSyncType MatchSyncType; /* 0x001C */
  FB_CSTRING SelectedPlaylist; /* 0x0020 */
  FB_CSTRING SelectedLevel; /* 0x0028 */
  FB_CSTRING SelectedInclusions; /* 0x0030 */
  FB_UINT32 SelectedDifficultyIndex; /* 0x0038 */
  FB_UINT32 SelectedZombieCharacterSetId; /* 0x003C */
  FB_UINT32 SelectedPlantCharacterSetId; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(MatchSyncEntityData) == 72);

}
