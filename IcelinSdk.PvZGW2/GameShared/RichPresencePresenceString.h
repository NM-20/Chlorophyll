#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849F78
   RuntimeId:        0E2E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1102
   VfTable:          000000014225F5F8
   Address (Base):   0000000143114190
*/
#pragma pack(push, 8)
class RichPresencePresenceString : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING SID; /* 0x0010 */
  FB_BOOLEAN Interpolated; /* 0x0018 */
  FB_UINT8 Index; /* 0x0019 */
  char pad_001A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(RichPresencePresenceString) == 32);

}
