#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZCommanderActionBaseData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 00000001428631C8
   RuntimeId:        20FA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A68
   VfTable:          0000000142353C18
   Address (Base):   00000001430E6DC0
*/
#pragma pack(push, 16)
class PVZAirStrikeActionData : public PVZCommanderActionBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LinearTransform LaunchTransform; /* 0x0030 */
  FB_HANDLE(class ProjectileBlueprint) Projectile; /* 0x0070 */
  FB_FLOAT32 InitialSpeed; /* 0x0078 */
  char pad_007C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PVZAirStrikeActionData) == 128);

}
