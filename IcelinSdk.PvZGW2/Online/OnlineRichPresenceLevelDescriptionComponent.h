#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/LevelDescriptionComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859008
   RuntimeId:        1ABB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DF8
   VfTable:          00000001422D55E8
   Address (Base):   000000014310C690
*/
#pragma pack(push, 8)
class OnlineRichPresenceLevelDescriptionComponent : public LevelDescriptionComponent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class OnlineRichPresenceString) RichPresenceString; /* 0x0010 */
  FB_REFARRAY(class OnlineRichPresenceContextValuePair) Contexts; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(OnlineRichPresenceLevelDescriptionComponent) == 32);

}
