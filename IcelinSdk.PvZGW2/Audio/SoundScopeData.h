#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837810
   RuntimeId:        04F6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0962
   VfTable:          00000001421FA120
   Address (Base):   00000001431178B0
*/
#pragma pack(push, 8)
class SoundScopeData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_HANDLE(class SoundScopeStrategyData) DefaultStrategy; /* 0x0018 */
  FB_UINT32 ScopeIndex; /* 0x0020 */
  char pad_0024[0x0004];
  FB_HANDLE(class SoundScopeData) TargetScope; /* 0x0028 */
  FB_UINT32 TargetMinimum; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SoundScopeData) == 56);

}
