#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F3D0
   RuntimeId:        12B7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          087B
   VfTable:          0000000142276768
   Address (Base):   0000000143110B30
*/
#pragma pack(push, 8)
class PoseDefinition : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef Animation; /* 0x0010 */
  FB_FLOAT32 AnimationDuration; /* 0x0024 */
  FB_REFARRAY(class PoseTransitionBase) Transitions; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PoseDefinition) == 48);

}
