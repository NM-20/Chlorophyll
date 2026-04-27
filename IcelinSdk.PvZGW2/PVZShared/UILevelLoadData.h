#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861B68
   RuntimeId:        1FCD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1011
   VfTable:          0000000142344248
   Address (Base):   0000000143109630
*/
#pragma pack(push, 8)
class UILevelLoadData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_GUID LoadingMovieGuid; /* 0x0010 */
  FB_CSTRING ScreenDataPath; /* 0x0020 */
  FB_CSTRING WidgetDataPath; /* 0x0028 */
  FB_STDARRAY(struct UILevelLoadGameModeData) GameModeData; /* 0x0030 */
  FB_BOOLEAN HasLoadingMovie; /* 0x0038 */
  char pad_0039[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UILevelLoadData) == 64);

}
