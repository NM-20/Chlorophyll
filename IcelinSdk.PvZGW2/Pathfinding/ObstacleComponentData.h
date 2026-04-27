#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850B18
   RuntimeId:        13ED
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D23
   VfTable:          000000014227C428
   Address (Base):   00000001430EB440
*/
#pragma pack(push, 16)
class ObstacleComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ObstacleDat) ObstacleData; /* 0x0070 */
  FB_FLOAT32 Radius; /* 0x0078 */
  FB_BOOLEAN ActiveAtStart; /* 0x007C */
  char pad_007D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(ObstacleComponentData) == 128);

}
