#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GameHealthComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E7E8
   RuntimeId:        1213
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D0E
   VfTable:          0000000142272EF0
   Address (Base):   00000001430ECA60
*/
#pragma pack(push, 16)
class ControllableHealthComponentData : public GameHealthComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(ControllableHealthComponentData) == 112);

}
