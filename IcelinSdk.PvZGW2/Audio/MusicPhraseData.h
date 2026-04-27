#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/MusicStreamableData.h>
#include <IcelinSdk.PvZGW2/Audio/MusicPhraseSelectionType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837DF0
   RuntimeId:        0554
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0843
   VfTable:          00000001421F9AD8
   Address (Base):   00000001430FF970
*/
#pragma pack(push, 8)
class MusicPhraseData : public MusicStreamableData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  MusicPhraseSelectionType SelectionType; /* 0x0058 */
  char pad_005C[0x0004];
  FB_HANDLE(class MusicParameterData) SelectionParameter; /* 0x0060 */
  FB_HANDLE(class SynchedFadeData) RangeFade; /* 0x0068 */
  FB_REFARRAY(class MusicStreamableData) Playables; /* 0x0070 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */
#pragma pack(pop)

static_assert(sizeof(MusicPhraseData) == 120);

}
