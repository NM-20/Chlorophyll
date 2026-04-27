#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850718
   RuntimeId:        13AD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06FA
   VfTable:          000000014227C7A0
   Address (Base):   00000001430FC490
*/
#pragma pack(push, 8)
class AutoObstacleTune : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 delay; /* 0x0018 */
  FB_UINT32 obstacleBlockageFlags; /* 0x001C */
  FB_BOOLEAN autoCreateObstacle; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(AutoObstacleTune) == 40);

}
