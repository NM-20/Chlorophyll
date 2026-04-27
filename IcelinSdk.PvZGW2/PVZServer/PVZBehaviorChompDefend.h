#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBehavior.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FAA8
   RuntimeId:        1DED
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10EA
   VfTable:          000000014231D5F8
   Address (Base):   00000001430F9490
*/
#pragma pack(push, 8)
class PVZBehaviorChompDefend : public PVZBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZBehaviorChompDefend) == 48);

}
