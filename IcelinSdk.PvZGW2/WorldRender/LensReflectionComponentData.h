#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855E08
   RuntimeId:        1896
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D82
   VfTable:          00000001422C50A8
   Address (Base):   00000001430E93A0
*/
#pragma pack(push, 16)
class LensReflectionComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 InnerColor; /* 0x0080 */
  Vec3 OuterColor; /* 0x0090 */
  Realm Realm; /* 0x00A0 */
  FB_FLOAT32 MixStart; /* 0x00A4 */
  FB_FLOAT32 MixStop; /* 0x00A8 */
  FB_FLOAT32 InputExponent; /* 0x00AC */
  FB_FLOAT32 InputScale; /* 0x00B0 */
  FB_FLOAT32 MaxOpacity; /* 0x00B4 */
  FB_FLOAT32 Scale; /* 0x00B8 */
  FB_FLOAT32 SphericalLensFactor; /* 0x00BC */
  FB_BOOLEAN Enable; /* 0x00C0 */
  FB_BOOLEAN ApplyExposure; /* 0x00C1 */
  FB_BOOLEAN CapMaxReflection; /* 0x00C2 */
  char pad_00C3[0x000D];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */
#pragma pack(pop)

static_assert(sizeof(LensReflectionComponentData) == 208);

}
