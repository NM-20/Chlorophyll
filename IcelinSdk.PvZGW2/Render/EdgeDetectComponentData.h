#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852F80
   RuntimeId:        161C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D79
   VfTable:          00000001422A1580
   Address (Base):   00000001430EAAE0
*/
#pragma pack(push, 16)
class EdgeDetectComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 edgeColor; /* 0x0080 */
  Realm Realm; /* 0x0090 */
  FB_FLOAT32 edgeThickness; /* 0x0094 */
  FB_FLOAT32 edgeDepthTest; /* 0x0098 */
  FB_FLOAT32 edgeFadeDistance; /* 0x009C */
  FB_FLOAT32 edgeOpacity; /* 0x00A0 */
  FB_BOOLEAN Enable; /* 0x00A4 */
  FB_BOOLEAN DebugMode; /* 0x00A5 */
  char pad_00A6[0x000A];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(EdgeDetectComponentData) == 176);

}
