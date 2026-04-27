#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/RecordTrackBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0D13
   TypeInfo Kind:    ClassInfo
   ClassId:          0075
   VfTable:          0000000000000000
   Address (Base):   0000000143121AB0
*/
class ServerRecordRootTransformTrack : public RecordTrackBase
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0068[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */

static_assert(sizeof(ServerRecordRootTransformTrack) == 120);

}
