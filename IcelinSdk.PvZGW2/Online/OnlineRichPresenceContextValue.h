#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858F68
   RuntimeId:        1AB1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FCE
   VfTable:          00000001422D5638
   Address (Base):   000000014310C870
*/
#pragma pack(push, 8)
class OnlineRichPresenceContextValue : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Sid; /* 0x0010 */
  FB_CSTRING Key; /* 0x0018 */
  FB_CSTRING XdpName; /* 0x0020 */
  FB_UINT8 Index; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(OnlineRichPresenceContextValue) == 48);

}
