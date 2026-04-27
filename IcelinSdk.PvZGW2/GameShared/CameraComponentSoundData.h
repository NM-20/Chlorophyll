#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E618
   RuntimeId:        11FB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08F5
   VfTable:          00000001422731D8
   Address (Base):   0000000143111550
*/
#pragma pack(push, 8)
class CameraComponentSoundData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundAsset) SwitchToAlternateViewSound; /* 0x0010 */
  FB_HANDLE(class SoundAsset) SwitchToNormalViewSound; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CameraComponentSoundData) == 32);

}
