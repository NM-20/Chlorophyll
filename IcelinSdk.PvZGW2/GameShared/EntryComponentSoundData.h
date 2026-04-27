#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C9E8
   RuntimeId:        1080
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1153
   VfTable:          0000000142267718
   Address (Base):   0000000143112690
*/
#pragma pack(push, 8)
class EntryComponentSoundData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct StanceSwitchSoundData) StanceSounds; /* 0x0010 */
  FB_HANDLE(class SoundAsset) StanceSwitchSound; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(EntryComponentSoundData) == 32);

}
