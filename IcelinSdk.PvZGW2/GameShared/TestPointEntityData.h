#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BE30
   RuntimeId:        0FDE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B4F
   VfTable:          0000000142268000
   Address (Base):   0000000143112BD0
*/
#pragma pack(push, 16)
class TestPointEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING OutputName; /* 0x0060 */
  char pad_0068[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(TestPointEntityData) == 112);

}
