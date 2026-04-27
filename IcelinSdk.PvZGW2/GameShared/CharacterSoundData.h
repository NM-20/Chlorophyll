#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DE70
   RuntimeId:        1196
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11FD
   VfTable:          0000000142273678
   Address (Base):   0000000143111910
*/
#pragma pack(push, 8)
class CharacterSoundData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundAsset) Movement; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(CharacterSoundData) == 24);

}
