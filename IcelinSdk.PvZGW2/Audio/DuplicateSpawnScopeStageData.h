#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundScopeStageData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428378D0
   RuntimeId:        0502
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10FB
   VfTable:          00000001421FA0D0
   Address (Base):   00000001430DCA70
*/
#pragma pack(push, 8)
class DuplicateSpawnScopeStageData : public SoundScopeStageData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Time; /* 0x0010 */
  FB_FLOAT32 Distance; /* 0x0014 */
  FB_UINT32 ClosestCount; /* 0x0018 */
  FB_BOOLEAN GroupTypes; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(DuplicateSpawnScopeStageData) == 32);

}
