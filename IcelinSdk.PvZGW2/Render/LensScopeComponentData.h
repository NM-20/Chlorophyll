#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853000
   RuntimeId:        1624
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D84
   VfTable:          00000001422A1480
   Address (Base):   00000001430EA960
*/
#pragma pack(push, 16)
class LensScopeComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 ChromaticAberrationColor1; /* 0x0080 */
  Vec3 ChromaticAberrationColor2; /* 0x0090 */
  Realm Realm; /* 0x00A0 */
  FB_FLOAT32 BlurScale; /* 0x00A4 */
  Vec2 BlurCenter; /* 0x00A8 */
  Vec2 ChromaticAberrationStrengths; /* 0x00B0 */
  Vec2 ChromaticAberrationDisplacement1; /* 0x00B8 */
  Vec2 ChromaticAberrationDisplacement2; /* 0x00C0 */
  Vec2 RadialBlendDistanceCoefficients; /* 0x00C8 */
  FB_BOOLEAN Enable; /* 0x00D0 */
  char pad_00D1[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(LensScopeComponentData) == 224);

}
