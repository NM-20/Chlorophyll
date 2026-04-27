#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A2E8
   RuntimeId:        0E60
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07C8
   VfTable:          000000014225F458
   Address (Base):   0000000143113DD0
*/
#pragma pack(push, 8)
class ProfileOptionsAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING FileName; /* 0x0018 */
  FB_CSTRING ContentName; /* 0x0020 */
  FB_UINT32 FileSize; /* 0x0028 */
  char pad_002C[0x0004];
  FB_REFARRAY(class ProfileOptionData) Options; /* 0x0030 */
  FB_REFARRAY(class ProfileOptionData) OptionsPs3; /* 0x0038 */
  FB_REFARRAY(class ProfileOptionData) OptionsXenon; /* 0x0040 */
  FB_REFARRAY(class ProfileOptionData) OptionsGen4a; /* 0x0048 */
  FB_REFARRAY(class ProfileOptionData) OptionsGen4b; /* 0x0050 */
  FB_REFARRAY(class ProfileOptionData) OptionsWin; /* 0x0058 */
  FB_BOOLEAN AutoSaveOnQuit; /* 0x0060 */
  char pad_0061[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(ProfileOptionsAsset) == 104);

}
