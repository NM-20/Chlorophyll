#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceBackendData.h>
#include <IcelinSdk.PvZGW2/Online/Ps4TitleData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858D98
   RuntimeId:        1A97
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06AF
   VfTable:          00000001422D56F0
   Address (Base):   000000014310C990
*/
#pragma pack(push, 8)
class Ps4PresenceBackendData : public PresenceBackendData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Ps4TitleData DefaultTitleData; /* 0x0018 */
  FB_STDARRAY(struct Ps4TitleData) TitleData; /* 0x0030 */
  FB_BOOLEAN TestMultiplayerPrivilege; /* 0x0038 */
  FB_BOOLEAN RequireMultiplayerPrivilege; /* 0x0039 */
  FB_BOOLEAN EnablePartySupport; /* 0x003A */
  char pad_003B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(Ps4PresenceBackendData) == 64);

}
