#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/AudioCurve.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B478
   RuntimeId:        08BE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AB5
   VfTable:          000000014220B0D8
   Address (Base):   00000001430EF2E0
*/
#pragma pack(push, 8)
class FloatCurveEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_FLOAT32 In; /* 0x001C */
  AudioCurve Curve; /* 0x0020 */
  FB_BOOLEAN OutputIntegral; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(FloatCurveEntityData) == 56);

}
