#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849C08
   RuntimeId:        0DFA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B56
   VfTable:          000000014225F840
   Address (Base):   00000001430EDFC0
*/
#pragma pack(push, 16)
class WaterDepthEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0060 */
  FB_BOOLEAN DefaultEnabled; /* 0x0064 */
  char pad_0065[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(WaterDepthEntityData) == 112);

}
