#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GamePhysicsComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D668
   RuntimeId:        112F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D01
   VfTable:          0000000142273E60
   Address (Base):   00000001430D64F0
*/
#pragma pack(push, 16)
class BangerPhysicsComponentData : public GamePhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 ImpulseInput; /* 0x00A0 */
  FB_FLOAT32 ExplosionSensitiveDistance; /* 0x00B0 */
  FB_BOOLEAN ExplosionSensitive; /* 0x00B4 */
  char pad_00B5[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(BangerPhysicsComponentData) == 192);

}
