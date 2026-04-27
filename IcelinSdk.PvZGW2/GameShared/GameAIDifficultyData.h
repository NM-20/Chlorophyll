#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A558
   RuntimeId:        0E86
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FC6
   VfTable:          0000000142266810
   Address (Base):   00000001430FD1B0
*/
#pragma pack(push, 8)
class GameAIDifficultyData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(GameAIDifficultyData) == 16);

}
