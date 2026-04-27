#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837F50
   RuntimeId:        056A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08ED
   VfTable:          00000001421F9A58
   Address (Base):   0000000143117190
*/
#pragma pack(push, 8)
class MusicPlaylistSelector : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MusicEventData) Event; /* 0x0010 */
  FB_HANDLE(class MusicAsset) Target; /* 0x0018 */
  FB_HANDLE(class MusicEventData) TriggerOnTarget; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MusicPlaylistSelector) == 40);

}
