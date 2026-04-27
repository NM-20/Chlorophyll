#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GamePhysicsComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286ABD8
   RuntimeId:        25CC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CF5
   VfTable:          000000014235AF30
   Address (Base):   0000000143106B10
*/
#pragma pack(push, 16)
class ProjectilePhysicsComponentData : public GamePhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(ProjectilePhysicsComponentData) == 160);

}
