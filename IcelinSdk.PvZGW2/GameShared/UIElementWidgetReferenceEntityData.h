#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/LogicReferenceObjectData.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementTransform.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementInclusionSettings.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementSize.h>
#include <IcelinSdk.PvZGW2/GameShared/UILayoutMode.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementOffset.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementAnchor.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementRectExpansion.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C688
   RuntimeId:        1050
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0984
   VfTable:          00000001422678C0
   Address (Base):   00000001430DBC30
*/
#pragma pack(push, 16)
class UIElementWidgetReferenceEntityData : public LogicReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UIElementTransform UIElementTransform; /* 0x00A0 */
  Vec3 Color; /* 0x00D0 */
  FB_CSTRING InstanceName; /* 0x00E0 */
  FB_UINT32 InstanceNameHash; /* 0x00E8 */
  char pad_00EC[0x0004];
  UIElementInclusionSettings InclusionSettings; /* 0x00F0 */
  UIElementSize Size; /* 0x0100 */
  UILayoutMode LayoutMode; /* 0x0108 */
  UIElementOffset Offset; /* 0x010C */
  UIElementAnchor Anchor; /* 0x0114 */
  UIElementOffset Position; /* 0x011C */
  UIElementRectExpansion Expansion; /* 0x0124 */
  FB_FLOAT32 Alpha; /* 0x0134 */
  FB_CSTRING CodeAccessIdentifier; /* 0x0138 */
  FB_BOOLEAN UseElementSize; /* 0x0140 */
  char pad_0141[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0150 */
#pragma pack(pop)

static_assert(sizeof(UIElementWidgetReferenceEntityData) == 336);

}
