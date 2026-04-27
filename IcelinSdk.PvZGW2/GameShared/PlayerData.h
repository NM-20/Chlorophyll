#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A1A8
   RuntimeId:        0E50
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0673
   VfTable:          000000014225F4A8
   Address (Base):   00000001430EDF60
*/
#pragma pack(push, 8)
class PlayerData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PlayerViewData) PlayerView; /* 0x0018 */
  FB_HANDLE(class EntryInputActionMapsData) InputConceptDefinition; /* 0x0020 */
  FB_HANDLE(class InputActionMappingsData) InputMapping; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PlayerData) == 48);

}
