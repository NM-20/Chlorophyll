#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/GameShared/InputActionMapSlot.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B258
   RuntimeId:        0F2F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          070A
   VfTable:          0000000142260F78
   Address (Base):   00000001430DC110
*/
#pragma pack(push, 8)
class EntryInputActionMapsData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 ActionMapSettingsScheme; /* 0x0018 */
  InputActionMapSlot DefaultInputActionMap; /* 0x001C */
  FB_REFARRAY(class EntryInputActionMapData) InputActionMaps; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(EntryInputActionMapsData) == 40);

}
