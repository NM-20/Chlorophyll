#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/LogicReferenceObjectData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/GameShared/UIScreenProjectionMode.h>
#include <IcelinSdk.PvZGW2/GameShared/UIScreenRenderingPass.h>
#include <IcelinSdk.PvZGW2/Render/LocalPlayerViewId.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C740
   RuntimeId:        105A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          097F
   VfTable:          0000000142267860
   Address (Base):   00000001430DBBD0
*/
#pragma pack(push, 16)
class UIScreenRenderEntityData : public LogicReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 Color; /* 0x00A0 */
  FB_HANDLE(class UICppScreenData) ScreenData; /* 0x00B0 */
  FB_FLOAT32 Scale; /* 0x00B8 */
  UIScreenProjectionMode ProjectionMode; /* 0x00BC */
  UIScreenRenderingPass RenderPass; /* 0x00C0 */
  FB_INT32 UpdateOrder; /* 0x00C4 */
  LocalPlayerViewId ViewId; /* 0x00C8 */
  FB_FLOAT32 Alpha; /* 0x00CC */
  FB_BOOLEAN UseGameViewProjection; /* 0x00D0 */
  FB_BOOLEAN EnableDepthCulling; /* 0x00D1 */
  FB_BOOLEAN CenterScreen; /* 0x00D2 */
  char pad_00D3[0x000D];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(UIScreenRenderEntityData) == 224);

}
