#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GameHealthComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839130
   RuntimeId:        066A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D0D
   VfTable:          00000001421FDE68
   Address (Base):   0000000143115F90
*/
#pragma pack(push, 16)
class BreakableModelHealthComponentData : public GameHealthComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(BreakableModelHealthComponentData) == 112);

}
