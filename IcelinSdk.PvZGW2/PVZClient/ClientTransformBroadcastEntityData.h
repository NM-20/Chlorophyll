#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 00000001428596F8
   RuntimeId:        1B3A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BFD
   VfTable:          00000001422DC050
   Address (Base):   00000001430E8860
*/
#pragma pack(push, 16)
class ClientTransformBroadcastEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 UpdateMaxDistance; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform Transform; /* 0x0020 */
  FB_BOOLEAN UpdateTransformOnly; /* 0x0060 */
  char pad_0061[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(ClientTransformBroadcastEntityData) == 112);

}
