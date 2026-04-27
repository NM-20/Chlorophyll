#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundScopeStageData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428378B0
   RuntimeId:        0500
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10F9
   VfTable:          00000001421FA0E0
   Address (Base):   00000001430FFA90
*/
#pragma pack(push, 8)
class MaxInstancesScopeStageData : public SoundScopeStageData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 Count; /* 0x0010 */
  FB_BOOLEAN KeepOldest; /* 0x0014 */
  char pad_0015[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MaxInstancesScopeStageData) == 24);

}
