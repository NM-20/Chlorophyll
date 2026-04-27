#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BE70
   RuntimeId:        095E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CA0
   VfTable:          0000000142212350
   Address (Base):   0000000143114F10
*/
#pragma pack(push, 16)
class TrajectoryEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0018[0x0008];
  LinearTransform OutTransform; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(TrajectoryEntityData) == 96);

}
