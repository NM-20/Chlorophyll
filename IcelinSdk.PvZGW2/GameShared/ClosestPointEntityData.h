#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BEF0
   RuntimeId:        0FEA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B7B
   VfTable:          0000000142267F20
   Address (Base):   0000000143112A50
*/
#pragma pack(push, 16)
class ClosestPointEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0060 */
  FB_FLOAT32 MaxDistance; /* 0x0064 */
  char pad_0068[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(ClosestPointEntityData) == 112);

}
