#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceRequestParameters.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CEC
   TypeInfo Kind:    ClassInfo
   ClassId:          0038
   VfTable:          0000000000000000
   Address (Base):   00000001431247B0
*/
class PresenceDownloadPromoItemRequestParameters : public PresenceRequestParameters
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0018[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */

static_assert(sizeof(PresenceDownloadPromoItemRequestParameters) == 32);

}
