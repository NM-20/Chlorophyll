#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementInclusionSettings.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C5D8
   RuntimeId:        1048
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A02
   VfTable:          0000000142267968
   Address (Base):   00000001430ECD60
*/
#pragma pack(push, 8)
class UIElementLayerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING LayerName; /* 0x0018 */
  FB_REFARRAY(class GameObjectData) Elements; /* 0x0020 */
  UIElementInclusionSettings InclusionSettings; /* 0x0028 */
  FB_BOOLEAN Visible; /* 0x0038 */
  char pad_0039[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UIElementLayerEntityData) == 64);

}
