#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856088
   RuntimeId:        18BE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D88
   VfTable:          00000001422C4D68
   Address (Base):   00000001430E8EC0
*/
#pragma pack(push, 16)
class SkyCelestialRotationComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 RotationAxis; /* 0x0080 */
  Realm Realm; /* 0x0090 */
  FB_FLOAT32 Rotation; /* 0x0094 */
  FB_BOOLEAN Enable; /* 0x0098 */
  char pad_0099[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(SkyCelestialRotationComponentData) == 160);

}
