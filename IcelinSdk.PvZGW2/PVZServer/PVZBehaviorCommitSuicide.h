#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBehavior.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FC08
   RuntimeId:        1E03
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10F3
   VfTable:          000000014231D520
   Address (Base):   00000001430F9070
*/
#pragma pack(push, 8)
class PVZBehaviorCommitSuicide : public PVZBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatProvider) Delay; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZBehaviorCommitSuicide) == 56);

}
