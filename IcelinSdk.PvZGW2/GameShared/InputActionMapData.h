#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/GameShared/InputActionMapPlatform.h>
#include <IcelinSdk.PvZGW2/GameShared/InputActionMapSlot.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B188
   RuntimeId:        0F25
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EE6
   VfTable:          0000000142261268
   Address (Base):   00000001430FD150
*/
#pragma pack(push, 8)
class InputActionMapData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class InputActionsData) Actions; /* 0x0010 */
  InputActionMapPlatform PlatformSpecific; /* 0x0018 */
  InputActionMapSlot Slot; /* 0x001C */
  FB_CSTRING CopyKeyBindingsFrom; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(InputActionMapData) == 40);

}
