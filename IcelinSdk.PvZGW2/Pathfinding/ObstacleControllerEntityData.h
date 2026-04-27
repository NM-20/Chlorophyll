#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850AF8
   RuntimeId:        13EB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C7A
   VfTable:          000000014227C468
   Address (Base):   00000001430EB4A0
*/
#pragma pack(push, 8)
class ObstacleControllerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ObstacleDat) ObstacleData; /* 0x0018 */
  FB_BOOLEAN ActiveAtStart; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ObstacleControllerEntityData) == 40);

}
