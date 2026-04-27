#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TransformLayerData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F330
   RuntimeId:        12AD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CEB
   VfTable:          0000000142276788
   Address (Base):   00000001430EBC20
*/
#pragma pack(push, 16)
class PathTransformLayerData : public TransformLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class GameObjectData) PathEntity; /* 0x0038 */
  Vec3 UpAxis; /* 0x0040 */
  FB_HANDLE(class FloatTrackData) TimingCurve; /* 0x0050 */
  FB_STDARRAY(FB_GUID) GuidChain; /* 0x0058 */
  FB_BOOLEAN ForceUpright; /* 0x0060 */
  FB_BOOLEAN Reverse; /* 0x0061 */
  char pad_0062[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(PathTransformLayerData) == 112);

}
