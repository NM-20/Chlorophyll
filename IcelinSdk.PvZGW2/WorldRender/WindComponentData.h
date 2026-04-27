#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855DC8
   RuntimeId:        1892
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D87
   VfTable:          00000001422BB5D0
   Address (Base):   00000001430E9460
*/
#pragma pack(push, 16)
class WindComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0080 */
  FB_FLOAT32 WindDirection; /* 0x0084 */
  FB_FLOAT32 WindStrength; /* 0x0088 */
  FB_FLOAT32 WindVariationMultiplier; /* 0x008C */
  FB_FLOAT32 WindVariationRateMultiplier; /* 0x0090 */
  FB_FLOAT32 WindMicroVariationMultiplier; /* 0x0094 */
  FB_FLOAT32 TurbulenceMultiplier; /* 0x0098 */
  FB_FLOAT32 TurbulenceScale; /* 0x009C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(WindComponentData) == 160);

}
