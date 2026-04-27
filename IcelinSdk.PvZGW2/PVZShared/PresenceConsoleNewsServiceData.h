#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BAE0
   RuntimeId:        2680
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06D1
   VfTable:          000000014235A950
   Address (Base):   00000001431063F0
*/
#pragma pack(push, 8)
class PresenceConsoleNewsServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PresenceConsoleNewsServiceData) == 24);

}
