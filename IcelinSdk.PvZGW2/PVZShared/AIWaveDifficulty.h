#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/DynamicDifficultyModifiers.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873488
   RuntimeId:        2BB8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E4D
   VfTable:          00000001423793A0
   Address (Base):   00000001430F5050
*/
#pragma pack(push, 8)
class AIWaveDifficulty : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  DynamicDifficultyModifiers SoldierMods; /* 0x0010 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AIWaveDifficulty) == 32);

}
