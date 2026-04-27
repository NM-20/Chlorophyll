#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBehavior.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FBC8
   RuntimeId:        1DFF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10F2
   VfTable:          000000014231D618
   Address (Base):   00000001430F9130
*/
#pragma pack(push, 8)
class PVZBehaviorActionSequence : public PVZBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct BehaviorAction) Actions; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZBehaviorActionSequence) == 56);

}
