#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceBackendData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858DB8
   RuntimeId:        1A99
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06AA
   VfTable:          00000001422D56E0
   Address (Base):   000000014310C930
*/
#pragma pack(push, 8)
class DurangoPresenceBackendData : public PresenceBackendData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 TitleId; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING ServiceConfigId; /* 0x0020 */
  FB_BOOLEAN TestMultiplayerPrivilege; /* 0x0028 */
  FB_BOOLEAN RequireMultiplayerPrivilege; /* 0x0029 */
  FB_BOOLEAN EnableGameInviteSupport; /* 0x002A */
  char pad_002B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(DurangoPresenceBackendData) == 48);

}
