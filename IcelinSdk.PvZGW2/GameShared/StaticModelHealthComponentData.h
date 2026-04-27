#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GameHealthComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B9B0
   RuntimeId:        0F98
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D0B
   VfTable:          0000000142268620
   Address (Base):   00000001430D6B50
*/
#pragma pack(push, 16)
class StaticModelHealthComponentData : public GameHealthComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(StaticModelHealthComponentData) == 112);

}
