#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F3F0
   RuntimeId:        12B9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08F7
   VfTable:          0000000142276750
   Address (Base):   00000001430DB9F0
*/
#pragma pack(push, 8)
class PoseTransitionBase : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PoseDefinition) TransitionTo; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PoseTransitionBase) == 24);

}
