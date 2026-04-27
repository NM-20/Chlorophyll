#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementTransform.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementSize.h>
#include <IcelinSdk.PvZGW2/GameShared/UILayoutMode.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementOffset.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementAnchor.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementRectExpansion.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C618
   RuntimeId:        104C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BA3
   VfTable:          00000001422679A0
   Address (Base):   00000001430BCFD0
*/
#pragma pack(push, 16)
class UIElementEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING InstanceName; /* 0x0018 */
  UIElementTransform UIElementTransform; /* 0x0020 */
  Vec3 Color; /* 0x0050 */
  LinearTransform Transform; /* 0x0060 */
  FB_UINT32 InstanceNameHash; /* 0x00A0 */
  UIElementSize Size; /* 0x00A4 */
  UILayoutMode LayoutMode; /* 0x00AC */
  UIElementOffset Offset; /* 0x00B0 */
  UIElementAnchor Anchor; /* 0x00B8 */
  UIElementOffset Position; /* 0x00C0 */
  UIElementRectExpansion Expansion; /* 0x00C8 */
  FB_FLOAT32 Alpha; /* 0x00D8 */
  FB_BOOLEAN Visible; /* 0x00DC */
  char pad_00DD[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(UIElementEntityData) == 224);

}
