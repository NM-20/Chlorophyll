#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837ED0
   RuntimeId:        0562
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E9A
   VfTable:          00000001421F9A88
   Address (Base):   00000001431171F0
*/
#pragma pack(push, 8)
class MusicTransition : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MusicStreamableData) Source; /* 0x0010 */
  FB_HANDLE(class MusicStreamableData) Destination; /* 0x0018 */
  FB_HANDLE(class BasicFadeData) Fade; /* 0x0020 */
  FB_HANDLE(class OverlayControl) OverlayControl; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(MusicTransition) == 48);

}
