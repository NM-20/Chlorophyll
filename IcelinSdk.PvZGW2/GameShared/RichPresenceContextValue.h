#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849F98
   RuntimeId:        0E30
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1000
   VfTable:          000000014225F618
   Address (Base):   00000001430FD690
*/
#pragma pack(push, 8)
class RichPresenceContextValue : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING SID; /* 0x0010 */
  FB_UINT8 Index; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(RichPresenceContextValue) == 32);

}
