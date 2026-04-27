#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EE80
   RuntimeId:        126B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A38
   VfTable:          0000000142274888
   Address (Base):   00000001430EC040
*/
#pragma pack(push, 8)
class LogicVisualEnvironmentEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VisualEnvironmentBlueprint) VisualEnvironment; /* 0x0018 */
  FB_FLOAT32 Visibility; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(LogicVisualEnvironmentEntityData) == 40);

}
