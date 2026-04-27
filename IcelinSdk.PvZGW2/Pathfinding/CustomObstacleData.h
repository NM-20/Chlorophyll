#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850A98
   RuntimeId:        13E5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1171
   VfTable:          000000014227C4F0
   Address (Base):   00000001430FC2B0
*/
#pragma pack(push, 8)
class CustomObstacleData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(CustomObstacleData) == 16);

}
