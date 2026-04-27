#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850AB8
   RuntimeId:        13E7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0883
   VfTable:          000000014227C4E0
   Address (Base):   00000001430FC250
*/
#pragma pack(push, 8)
class ObstacleDat : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 LayerMask; /* 0x0010 */
  FB_FLOAT32 PenaltyMult; /* 0x0014 */
  FB_UINT32 ObstacleBlockageFlags; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class CustomObstacleData) UserData; /* 0x0020 */
  FB_CSTRING ObstacleName; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ObstacleDat) == 48);

}
