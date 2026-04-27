#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>

namespace fb
{

/* TypeInfo (Array): 00000001428720E8
   RuntimeId:        2B0D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E6B
   VfTable:          000000014236BD78
   Address (Base):   0000000143104FB0
*/
#pragma pack(push, 8)
class UIMatchmakingDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Identifier; /* 0x0028 */
  FB_CSTRING Header; /* 0x0030 */
  FB_CSTRING Description; /* 0x0038 */
  FB_CSTRING MapsDescription; /* 0x0040 */
  FB_STDARRAY(FB_CSTRING) GameModes; /* 0x0048 */
  FB_STDARRAY(FB_CSTRING) LevelPaths; /* 0x0050 */
  FB_CSTRING Experience; /* 0x0058 */
  FB_CSTRING VideoThumbnailPath; /* 0x0060 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(UIMatchmakingDescription) == 104);

}
