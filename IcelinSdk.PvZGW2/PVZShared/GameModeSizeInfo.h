#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428618A8
   RuntimeId:        1FAF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          094F
   VfTable:          00000001423443C8
   Address (Base):   0000000143109750
*/
#pragma pack(push, 8)
class GameModeSizeInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct GameModeTeamSize) Teams; /* 0x0010 */
  FB_UINT32 TeamImbalanceLimit; /* 0x0018 */
  FB_UINT32 CommanderCount; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(GameModeSizeInfo) == 32);

}
