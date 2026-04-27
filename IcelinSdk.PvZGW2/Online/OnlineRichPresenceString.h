#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858FA8
   RuntimeId:        1AB5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E38
   VfTable:          00000001422D55C8
   Address (Base):   000000014310C7B0
*/
#pragma pack(push, 8)
class OnlineRichPresenceString : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Sid; /* 0x0010 */
  FB_CSTRING XdpName; /* 0x0018 */
  FB_UINT8 Index; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(OnlineRichPresenceString) == 40);

}
