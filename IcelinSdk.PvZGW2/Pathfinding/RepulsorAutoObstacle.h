#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850698
   RuntimeId:        13A5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07E4
   VfTable:          000000014227C7B0
   Address (Base):   000000014310FED0
*/
#pragma pack(push, 8)
class RepulsorAutoObstacle : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ImmobilityTime; /* 0x0018 */
  FB_FLOAT32 ObstacleRadiusScale; /* 0x001C */
  FB_FLOAT32 ObstacleHeightScale; /* 0x0020 */
  FB_BOOLEAN Enable; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(RepulsorAutoObstacle) == 40);

}
