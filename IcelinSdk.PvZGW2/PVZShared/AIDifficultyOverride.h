#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/GameShared/Difficulty.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874568
   RuntimeId:        2C60
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0847
   VfTable:          0000000142378798
   Address (Base):   0000000143104110
*/
#pragma pack(push, 8)
class AIDifficultyOverride : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Difficulty Difficulty; /* 0x0010 */
  char pad_0014[0x0004];
  FB_HANDLE(class AIDifficultyData) AIData; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AIDifficultyOverride) == 32);

}
