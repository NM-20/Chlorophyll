#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DDE0
   RuntimeId:        118F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D57
   VfTable:          00000001422736C0
   Address (Base):   00000001430D6250
*/
#pragma pack(push, 16)
class PhysicsDrivenComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SprintMultiplier; /* 0x0070 */
  FB_INT32 ParachuteToggle; /* 0x0074 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PhysicsDrivenComponentData) == 128);

}
