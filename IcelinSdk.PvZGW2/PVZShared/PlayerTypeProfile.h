#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428622F0
   RuntimeId:        203E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07DD
   VfTable:          0000000142343E90
   Address (Base):   0000000143108A90
*/
#pragma pack(push, 8)
class PlayerTypeProfile : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PersistenceData) Values; /* 0x0018 */
  FB_HANDLE(class AwardDataTree) Awards; /* 0x0020 */
  FB_HANDLE(class RankParamsAsset) RankParams; /* 0x0028 */
  FB_HANDLE(class ScoringData) Scoring; /* 0x0030 */
  FB_HANDLE(class CardPackAsset) CardPacks; /* 0x0038 */
  FB_HANDLE(class DailyQuestAsset) DailyQuests; /* 0x0040 */
  FB_HANDLE(class PersistedLicenseAsset) PersistedLicenses; /* 0x0048 */
  FB_HANDLE(class UserInboxMessageAsset) UserInboxMessages; /* 0x0050 */
  FB_HANDLE(class StoreItemsAsset) StoreItems; /* 0x0058 */
  FB_HANDLE(class InventoryExportAsset) InventoryExports; /* 0x0060 */
  FB_HANDLE(class StatSpamSettings) SpamSettings; /* 0x0068 */
  FB_HANDLE(class BytevaultAsset) Bytevault; /* 0x0070 */
  FB_HANDLE(class PVZSaveAsset) PVZSave; /* 0x0078 */
  FB_HANDLE(class PVZBlazePlaylistAsset) Playlist; /* 0x0080 */
  FB_HANDLE(class CommunityEventAsset) CommunityEvents; /* 0x0088 */
  FB_HANDLE(class CommunityPortalAsset) CommunityPortal; /* 0x0090 */
  FB_HANDLE(class BlackMarketAsset) BlackMarket; /* 0x0098 */
  FB_HANDLE(class PlaylistCompilationAsset) Playlists; /* 0x00A0 */
  FB_HANDLE(class EditorialAsset) Editorial; /* 0x00A8 */
  FB_HANDLE(class TournamentAsset) Tournament; /* 0x00B0 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B8 */
#pragma pack(pop)

static_assert(sizeof(PlayerTypeProfile) == 184);

}
