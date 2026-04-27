#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameObjectData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A968
   RuntimeId:        0811
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CF1
   VfTable:          000000014220C040
   Address (Base):   00000001430BD090
*/
#pragma pack(push, 16)
class ComponentData : public GameObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class GameObjectData) Components; /* 0x0018 */
  LinearTransform Transform; /* 0x0020 */
  FB_BOOLEAN Excluded; /* 0x0060 */
  char pad_0061[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(ComponentData) == 112);

}
