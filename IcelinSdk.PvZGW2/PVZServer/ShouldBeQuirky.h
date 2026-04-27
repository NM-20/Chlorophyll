#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F0F8
   RuntimeId:        1D53
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          105B
   VfTable:          000000014231DD58
   Address (Base):   000000014310B550
*/
#pragma pack(push, 8)
class ShouldBeQuirky : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 QuirkFrequencyMin; /* 0x0010 */
  FB_FLOAT32 QuirkFrequencyMax; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ShouldBeQuirky) == 24);

}
