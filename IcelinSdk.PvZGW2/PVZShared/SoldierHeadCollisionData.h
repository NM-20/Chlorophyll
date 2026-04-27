#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862AB0
   RuntimeId:        20B0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E3A
   VfTable:          0000000142354220
   Address (Base):   0000000143108610
*/
#pragma pack(push, 8)
class SoldierHeadCollisionData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 HeadRadius; /* 0x0010 */
  char pad_0014[0x0004];
  FB_STDARRAY(struct SoldierHeadCollisionPoseData) PoseStates; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SoldierHeadCollisionData) == 32);

}
