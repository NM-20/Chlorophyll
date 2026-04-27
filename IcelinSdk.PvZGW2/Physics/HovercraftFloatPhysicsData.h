#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/HullFloatPhysicsData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851098
   RuntimeId:        1436
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11FA
   VfTable:          000000014227F6E0
   Address (Base):   00000001430EB320
*/
#pragma pack(push, 16)
class HovercraftFloatPhysicsData : public HullFloatPhysicsData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 LandResistanceAxisMod; /* 0x0090 */
  Vec3 LandFrictionAxisMod; /* 0x00A0 */
  FB_FLOAT32 FrontLength; /* 0x00B0 */
  FB_FLOAT32 SideLength; /* 0x00B4 */
  char pad_00B8[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(HovercraftFloatPhysicsData) == 192);

}
