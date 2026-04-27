#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837850
   RuntimeId:        04FA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          114E
   VfTable:          00000001421FA100
   Address (Base):   0000000143117850
*/
#pragma pack(push, 8)
class SoundScopeStrategyData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_REFARRAY(class SoundScopeStageData) Stages; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SoundScopeStrategyData) == 32);

}
