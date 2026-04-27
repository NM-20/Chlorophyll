#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TransformLayerData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D458
   RuntimeId:        27D3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CE5
   VfTable:          0000000142365B70
   Address (Base):   00000001430E4420
*/
#pragma pack(push, 8)
class OrbitalCamLayerData : public TransformLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatTrackData) DistanceFromPivot; /* 0x0038 */
  FB_HANDLE(class FloatTrackData) RotationY; /* 0x0040 */
  FB_HANDLE(class FloatTrackData) PositionY; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(OrbitalCamLayerData) == 80);

}
