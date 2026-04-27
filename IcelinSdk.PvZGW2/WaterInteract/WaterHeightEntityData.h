#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876E58
   RuntimeId:        2E34
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B4B
   VfTable:          0000000142395B98
   Address (Base):   00000001430DFF80
*/
#pragma pack(push, 16)
class WaterHeightEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0060 */
  FB_BOOLEAN AutoStart; /* 0x0064 */
  char pad_0065[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(WaterHeightEntityData) == 112);

}
