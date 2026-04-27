#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A188
   RuntimeId:        0E4E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AFB
   VfTable:          000000014225F528
   Address (Base):   0000000143113E90
*/
#pragma pack(push, 16)
class PlayAnimationVisualizerEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PlayAnimationVisualizerEntityData) == 96);

}
