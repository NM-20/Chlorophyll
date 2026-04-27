#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428560E8
   RuntimeId:        18C4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D7C
   VfTable:          00000001422C4CA8
   Address (Base):   00000001430E8DA0
*/
#pragma pack(push, 16)
class ShadowControlComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0080 */
  FB_FLOAT32 SpotLightShadowMaxAngle; /* 0x0084 */
  FB_FLOAT32 SpotLightShadowFadeOutRange; /* 0x0088 */
  FB_BOOLEAN Enable; /* 0x008C */
  char pad_008D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(ShadowControlComponentData) == 144);

}
