#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/AntGameStateData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D300
   RuntimeId:        10F9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F5A
   VfTable:          0000000142274378
   Address (Base):   00000001430BEFB0
*/
#pragma pack(push, 8)
class WriteAntGameStateData : public AntGameStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(WriteAntGameStateData) == 24);

}
