#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852FC0
   RuntimeId:        1620
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D86
   VfTable:          00000001422A1540
   Address (Base):   00000001430EAA20
*/
#pragma pack(push, 16)
class VignetteComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 Color; /* 0x0080 */
  Realm Realm; /* 0x0090 */
  Vec2 Scale; /* 0x0094 */
  FB_FLOAT32 Exponent; /* 0x009C */
  FB_FLOAT32 Opacity; /* 0x00A0 */
  FB_BOOLEAN Enable; /* 0x00A4 */
  char pad_00A5[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(VignetteComponentData) == 176);

}
