#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementBitmapDistanceFieldParams.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876938
   RuntimeId:        2DF3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BAB
   VfTable:          0000000142392E78
   Address (Base):   00000001430CF960
*/
#pragma pack(push, 16)
class UIElementBitmapEntityData : public UIElementEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec4 UVRect; /* 0x00E0 */
  UIElementBitmapDistanceFieldParams DistanceFieldParams; /* 0x00F0 */
  FB_HANDLE(class UIElementGenericStyle) Style; /* 0x0120 */
  FB_CSTRING TextureId; /* 0x0128 */
  FB_CSTRING TextureIdPropertyName; /* 0x0130 */
  FB_BOOLEAN DistanceField; /* 0x0138 */
  char pad_0139[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0140 */
#pragma pack(pop)

static_assert(sizeof(UIElementBitmapEntityData) == 320);

}
