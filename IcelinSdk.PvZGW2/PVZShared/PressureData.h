#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/PVZShared/PressurePriority.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873B98
   RuntimeId:        2C22
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06B2
   VfTable:          0000000142378EF8
   Address (Base):   00000001431043B0
*/
#pragma pack(push, 8)
class PressureData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PressurePriority Priority; /* 0x0018 */
  FB_FLOAT32 Weight; /* 0x001C */
  FB_FLOAT32 TimeAllowance; /* 0x0020 */
  FB_FLOAT32 AttackRadius; /* 0x0024 */
  FB_FLOAT32 ReadyRadius; /* 0x0028 */
  char pad_002C[0x0004];
  FB_STDARRAY(struct PressureDifficultyData) DefenderDifficulty; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PressureData) == 56);

}
