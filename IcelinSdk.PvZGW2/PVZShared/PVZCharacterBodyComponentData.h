#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863FB8
   RuntimeId:        2197
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DAB
   VfTable:          0000000142352B28
   Address (Base):   00000001430D4150
*/
#pragma pack(push, 16)
class PVZCharacterBodyComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 OverrideGravityValue; /* 0x0070 */
  FB_FLOAT32 OverrideVelocityY; /* 0x0074 */
  FB_FLOAT32 CharacterGravityScale; /* 0x0078 */
  FB_BOOLEAN OverrideGravity; /* 0x007C */
  FB_BOOLEAN OverrideVelocity; /* 0x007D */
  FB_BOOLEAN DisableParachute; /* 0x007E */
  char pad_007F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterBodyComponentData) == 128);

}
