#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GameHealthComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DB18
   RuntimeId:        283C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D08
   VfTable:          000000014236EE00
   Address (Base):   00000001430E4360
*/
#pragma pack(push, 16)
class ExplosionPackHealthComponentData : public GameHealthComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(ExplosionPackHealthComponentData) == 112);

}
