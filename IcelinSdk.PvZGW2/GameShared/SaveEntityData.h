#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849600
   RuntimeId:        0DA0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AEE
   VfTable:          000000014225FED8
   Address (Base):   00000001430EE620
*/
#pragma pack(push, 8)
class SaveEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TextureAsset) SaveScreenTexture; /* 0x0018 */
  FB_CSTRING LevelName; /* 0x0020 */
  FB_CSTRING SaveFileName; /* 0x0028 */
  FB_CSTRING SaveNameSID; /* 0x0030 */
  FB_BOOLEAN CheckForHumanPlayer; /* 0x0038 */
  char pad_0039[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(SaveEntityData) == 64);

}
