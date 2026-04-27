#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858FE8
   RuntimeId:        1AB9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0693
   VfTable:          00000001422D55F8
   Address (Base):   000000014310C6F0
*/
#pragma pack(push, 8)
class OnlineRichPresenceData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class OnlineRichPresenceString) RichPresenceStrings; /* 0x0018 */
  FB_REFARRAY(class OnlineRichPresenceContext) Contexts; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(OnlineRichPresenceData) == 40);

}
