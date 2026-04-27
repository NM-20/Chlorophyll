#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/HealthComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E7C8
   RuntimeId:        1211
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D07
   VfTable:          0000000142272F38
   Address (Base):   00000001430BC980
*/
#pragma pack(push, 16)
class GameHealthComponentData : public HealthComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(GameHealthComponentData) == 112);

}
