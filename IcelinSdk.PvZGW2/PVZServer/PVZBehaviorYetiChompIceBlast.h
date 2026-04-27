#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBehavior.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FC28
   RuntimeId:        1E05
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10F0
   VfTable:          000000014231D510
   Address (Base):   00000001430F9010
*/
#pragma pack(push, 8)
class PVZBehaviorYetiChompIceBlast : public PVZBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 PostFireDelay; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZBehaviorYetiChompIceBlast) == 56);

}
