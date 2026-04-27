#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AC68
   RuntimeId:        0EE1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A45
   VfTable:          0000000142263090
   Address (Base):   0000000143113A70
*/
#pragma pack(push, 16)
class ClientEffectMaskVolumeEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 LifeTimeInSeconds; /* 0x0018 */
  char pad_001C[0x0004];
  Vec4 ApplyEffectCurve; /* 0x0020 */
  FB_FLOAT32 UpdatePeriodInSeconds; /* 0x0030 */
  FB_FLOAT32 Radius; /* 0x0034 */
  char pad_0038[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ClientEffectMaskVolumeEntityData) == 64);

}
