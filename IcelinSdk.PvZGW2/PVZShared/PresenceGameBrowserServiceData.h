#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FD88
   RuntimeId:        293A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06D5
   VfTable:          000000014236DF50
   Address (Base):   00000001430F5410
*/
#pragma pack(push, 8)
class PresenceGameBrowserServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING AnyGameConfig; /* 0x0018 */
  FB_CSTRING GameGroupConfig; /* 0x0020 */
  FB_CSTRING GameSessionConfig; /* 0x0028 */
  FB_CSTRING GameGroupListConfig; /* 0x0030 */
  FB_UINT32 ListCapacity; /* 0x0038 */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(PresenceGameBrowserServiceData) == 64);

}
