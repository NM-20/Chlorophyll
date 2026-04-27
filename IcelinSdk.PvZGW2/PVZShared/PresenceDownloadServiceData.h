#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BB60
   RuntimeId:        2688
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06D4
   VfTable:          000000014235A9D0
   Address (Base):   0000000143106330
*/
#pragma pack(push, 8)
class PresenceDownloadServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PresenceDownloadServiceData) == 24);

}
