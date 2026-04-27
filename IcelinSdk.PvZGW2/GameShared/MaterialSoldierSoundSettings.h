#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428499B8
   RuntimeId:        0DD6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0610
   VfTable:          000000014225F9E0
   Address (Base):   00000001431144F0
*/
#pragma pack(push, 8)
class MaterialSoldierSoundSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundAsset) FootStepSound; /* 0x0010 */
  FB_HANDLE(class SoundAsset) ProneSound; /* 0x0018 */
  FB_HANDLE(class SoundAsset) LandSound; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MaterialSoldierSoundSettings) == 40);

}
