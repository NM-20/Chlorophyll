#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>

namespace fb
{

/* TypeInfo (Array): 00000001428720C8
   RuntimeId:        2B0B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E67
   VfTable:          000000014236BD88
   Address (Base):   0000000143105010
*/
#pragma pack(push, 8)
class UILevelDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING LevelName; /* 0x0028 */
  FB_CSTRING TexturePath; /* 0x0030 */
  FB_CSTRING ThumbnailTexturePath; /* 0x0038 */
  FB_CSTRING MiniatureTexturePath; /* 0x0040 */
  FB_CSTRING LevelTextureName; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(UILevelDescription) == 80);

}
