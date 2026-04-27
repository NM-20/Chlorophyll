#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/PVZShared/EActorRole.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873B08
   RuntimeId:        2C1A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D66
   VfTable:          0000000142378F08
   Address (Base):   00000001430D2F50
*/
#pragma pack(push, 16)
class AIAttractorComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 AttackHeight; /* 0x0070 */
  EActorRole Role; /* 0x0080 */
  char pad_0084[0x0004];
  FB_STDARRAY(struct AIAttractorData) AttractorInteractions; /* 0x0088 */
  FB_STDARRAY(struct Vec3) LocationOffsets; /* 0x0090 */
  FB_FLOAT32 GlobalPriorityModifier; /* 0x0098 */
  FB_BOOLEAN UseAttackOffsetForLineOfSightTest; /* 0x009C */
  char pad_009D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(AIAttractorComponentData) == 160);

}
