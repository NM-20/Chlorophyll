#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DB80
   RuntimeId:        1169
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07F6
   VfTable:          0000000142273A80
   Address (Base):   0000000143111A30
*/
#pragma pack(push, 8)
class GameModeViewDefinition : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING GameModeName; /* 0x0018 */
  FB_STDARRAY(struct PlayerViewDefinition) ViewDefinitions; /* 0x0020 */
  FB_BOOLEAN NISView; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(GameModeViewDefinition) == 48);

}
