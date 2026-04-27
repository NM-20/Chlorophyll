#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CBB0
   RuntimeId:        109C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D22
   VfTable:          0000000142267458
   Address (Base):   00000001431125D0
*/
#pragma pack(push, 16)
class SoldierGripComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(SoldierGripComponentData) == 112);

}
