#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementSize.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C5F8
   RuntimeId:        104A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BBD
   VfTable:          0000000142267930
   Address (Base):   00000001430BCF70
*/
#pragma pack(push, 8)
class UIWidgetEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UIElementSize Size; /* 0x0018 */
  FB_REFARRAY(class UIElementLayerEntityData) Layers; /* 0x0020 */
  FB_REFARRAY(class UITextureMappingAsset) TextureMappings; /* 0x0028 */
  FB_REFARRAY(class GameObjectData) Components; /* 0x0030 */
  FB_BOOLEAN Visible; /* 0x0038 */
  char pad_0039[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UIWidgetEntityData) == 64);

}
