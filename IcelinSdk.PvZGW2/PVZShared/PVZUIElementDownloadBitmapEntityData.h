#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UIElementBitmapEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>
#include <IcelinSdk.PvZGW2/GameShared/UIBlendMode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428719D0
   RuntimeId:        2A9F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BAE
   VfTable:          000000014236C618
   Address (Base):   00000001430D91D0
*/
#pragma pack(push, 16)
class PVZUIElementDownloadBitmapEntityData : public UIElementBitmapEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec2 DynamicSize; /* 0x0140 */
  FB_CSTRING FallbackTextureId; /* 0x0148 */
  FB_CSTRING ImageUrl; /* 0x0150 */
  UIBlendMode BlendMode; /* 0x0158 */
  FB_BOOLEAN OverrideBlendMode; /* 0x015C */
  char pad_015D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0160 */
#pragma pack(pop)

static_assert(sizeof(PVZUIElementDownloadBitmapEntityData) == 352);

}
