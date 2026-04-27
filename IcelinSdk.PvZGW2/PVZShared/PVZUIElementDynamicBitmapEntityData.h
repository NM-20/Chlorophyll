#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UIElementBitmapEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>
#include <IcelinSdk.PvZGW2/GameShared/UIBlendMode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428719B0
   RuntimeId:        2A9D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BAC
   VfTable:          000000014236C650
   Address (Base):   00000001430D9230
*/
#pragma pack(push, 16)
class PVZUIElementDynamicBitmapEntityData : public UIElementBitmapEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec2 DynamicSize; /* 0x0140 */
  FB_CSTRING DynamicTextureId; /* 0x0148 */
  UIBlendMode BlendMode; /* 0x0150 */
  FB_BOOLEAN IsNews; /* 0x0154 */
  FB_BOOLEAN NewsUseDynamicImage; /* 0x0155 */
  FB_BOOLEAN OverrideBlendMode; /* 0x0156 */
  char pad_0157[0x0009];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0160 */
#pragma pack(pop)

static_assert(sizeof(PVZUIElementDynamicBitmapEntityData) == 352);

}
