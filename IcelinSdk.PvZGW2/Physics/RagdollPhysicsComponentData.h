#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851A28
   RuntimeId:        14C6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CF3
   VfTable:          000000014227F0F0
   Address (Base):   00000001430EB140
*/
#pragma pack(push, 16)
class RagdollPhysicsComponentData : public PhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_UINT32) BodyNameHashes; /* 0x0090 */
  char pad_0098[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(RagdollPhysicsComponentData) == 160);

}
