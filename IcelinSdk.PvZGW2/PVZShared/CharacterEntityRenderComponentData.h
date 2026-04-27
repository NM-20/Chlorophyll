#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/CharacterEntityRenderAnimationBinding.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863F48
   RuntimeId:        2191
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D98
   VfTable:          0000000142352E08
   Address (Base):   00000001430D4B10
*/
#pragma pack(push, 16)
class CharacterEntityRenderComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  CharacterEntityRenderAnimationBinding CharacterEntityRenderBinding; /* 0x0070 */
  FB_BOOLEAN IsRenderingOnSpawn; /* 0x0084 */
  char pad_0085[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(CharacterEntityRenderComponentData) == 144);

}
