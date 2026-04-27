#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DA58
   RuntimeId:        2830
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          118B
   VfTable:          000000014236EBE8
   Address (Base):   00000001430D9410
*/
#pragma pack(push, 8)
class ExplosionPackTrigger : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ExplosionPackTrigger) == 16);

}
