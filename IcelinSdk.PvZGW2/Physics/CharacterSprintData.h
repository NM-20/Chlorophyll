#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851640
   RuntimeId:        1488
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EF1
   VfTable:          000000014227F470
   Address (Base):   000000014310F0F0
*/
#pragma pack(push, 8)
class CharacterSprintData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SprintPowerDecreasePerSecond; /* 0x0010 */
  FB_FLOAT32 SprintPowerIncreasePerSecond; /* 0x0014 */
  FB_FLOAT32 SprintMinimumPower; /* 0x0018 */
  FB_BOOLEAN AllowContinousSprinting; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CharacterSprintData) == 32);

}
