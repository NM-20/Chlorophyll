#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceBackendData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858CE0
   RuntimeId:        1A8F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06B0
   VfTable:          00000001422D5728
   Address (Base):   000000014310C9F0
*/
#pragma pack(push, 8)
class XenonPresenceBackendData : public PresenceBackendData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 TitleId; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(XenonPresenceBackendData) == 32);

}
