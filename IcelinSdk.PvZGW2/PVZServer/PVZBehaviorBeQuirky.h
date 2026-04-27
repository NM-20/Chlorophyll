#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBehavior.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FC48
   RuntimeId:        1E07
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10E9
   VfTable:          000000014231D500
   Address (Base):   00000001430F8FB0
*/
#pragma pack(push, 8)
class PVZBehaviorBeQuirky : public PVZBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 InfluenceRadius; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZBehaviorBeQuirky) == 56);

}
