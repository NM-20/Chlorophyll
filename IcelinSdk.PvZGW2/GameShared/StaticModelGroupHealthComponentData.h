#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GameHealthComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AEE8
   RuntimeId:        0F03
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D0C
   VfTable:          0000000142262708
   Address (Base):   00000001430D72D0
*/
#pragma pack(push, 16)
class StaticModelGroupHealthComponentData : public GameHealthComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(StaticModelGroupHealthComponentData) == 112);

}
