#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855DA8
   RuntimeId:        1890
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D7E
   VfTable:          00000001422BB610
   Address (Base):   00000001430E94C0
*/
#pragma pack(push, 16)
class DynamicEnvmapComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 KeyColorEnvmap; /* 0x0080 */
  Vec3 SkyColorEnvmap; /* 0x0090 */
  Vec3 GroundColorEnvmap; /* 0x00A0 */
  Realm Realm; /* 0x00B0 */
  FB_BOOLEAN Enable; /* 0x00B4 */
  FB_BOOLEAN TerrainReflectionsEnable; /* 0x00B5 */
  char pad_00B6[0x000A];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(DynamicEnvmapComponentData) == 192);

}
