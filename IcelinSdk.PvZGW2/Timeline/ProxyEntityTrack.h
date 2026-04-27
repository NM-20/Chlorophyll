#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/EntityTrackBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        17CA
   TypeInfo Kind:    ClassInfo
   ClassId:          0080
   VfTable:          0000000000000000
   Address (Base):   000000014311EF30
*/
class ProxyEntityTrack : public EntityTrackBase
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(ProxyEntityTrack) == 128);

}
