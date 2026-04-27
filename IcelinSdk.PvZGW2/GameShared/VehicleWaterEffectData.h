#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CCB8
   RuntimeId:        10AA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0946
   VfTable:          00000001422673B0
   Address (Base):   0000000143112510
*/
#pragma pack(push, 16)
class VehicleWaterEffectData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EffectBlueprint) Effect; /* 0x0010 */
  char pad_0018[0x0008];
  Vec3 Position; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(VehicleWaterEffectData) == 48);

}
