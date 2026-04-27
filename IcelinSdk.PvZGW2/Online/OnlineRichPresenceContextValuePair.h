#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858FC8
   RuntimeId:        1AB7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1150
   VfTable:          00000001422D55B8
   Address (Base):   000000014310C750
*/
#pragma pack(push, 8)
class OnlineRichPresenceContextValuePair : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class OnlineRichPresenceContext) Context; /* 0x0010 */
  FB_HANDLE(class OnlineRichPresenceContextValue) Value; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(OnlineRichPresenceContextValuePair) == 32);

}
