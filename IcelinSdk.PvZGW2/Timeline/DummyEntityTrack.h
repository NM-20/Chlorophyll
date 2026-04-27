#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/EntityTrackBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        17C9
   TypeInfo Kind:    ClassInfo
   ClassId:          0083
   VfTable:          0000000000000000
   Address (Base):   00000001431215B0
*/
class DummyEntityTrack : public EntityTrackBase
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(DummyEntityTrack) == 128);

}
