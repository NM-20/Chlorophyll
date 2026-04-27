#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/ProxyEntityTrack.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        17CB
   TypeInfo Kind:    ClassInfo
   ClassId:          0081
   VfTable:          0000000000000000
   Address (Base):   0000000143121560
*/
class TemplatedProxyEntityTrack : public ProxyEntityTrack
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(TemplatedProxyEntityTrack) == 128);

}
