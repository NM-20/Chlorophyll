#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GameAIDifficultyData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428737C8
   RuntimeId:        2BEC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FC7
   VfTable:          00000001423791F8
   Address (Base):   00000001430F50B0
*/
#pragma pack(push, 8)
class AIDifficultyData : public GameAIDifficultyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 WeaponSprayMultiplier; /* 0x0010 */
  FB_FLOAT32 WeaponAccuracyMultiplier; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AIDifficultyData) == 24);

}
