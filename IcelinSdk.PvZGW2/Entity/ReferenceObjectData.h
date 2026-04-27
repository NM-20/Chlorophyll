#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameObjectData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/Entity/StreamRealm.h>
#include <IcelinSdk.PvZGW2/Entity/RadiosityTypeOverride.h>
#include <IcelinSdk.PvZGW2/Entity/RenderingOverrides.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A6A8
   RuntimeId:        07E5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          097D
   VfTable:          000000014220C370
   Address (Base):   00000001430B50A0
*/
#pragma pack(push, 16)
class ReferenceObjectData : public GameObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class Blueprint) Blueprint; /* 0x0018 */
  LinearTransform BlueprintTransform; /* 0x0020 */
  FB_HANDLE(class ObjectVariation) ObjectVariation; /* 0x0060 */
  StreamRealm StreamRealm; /* 0x0068 */
  RadiosityTypeOverride RadiosityTypeOverride; /* 0x006C */
  FB_UINT32 LightmapResolutionScale; /* 0x0070 */
  RenderingOverrides RenderingOverrides; /* 0x0074 */
  FB_BOOLEAN CastSunShadowEnable; /* 0x0080 */
  FB_BOOLEAN CastReflectionEnable; /* 0x0081 */
  FB_BOOLEAN CastEnvmapEnable; /* 0x0082 */
  FB_BOOLEAN Excluded; /* 0x0083 */
  char pad_0084[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(ReferenceObjectData) == 144);

}
