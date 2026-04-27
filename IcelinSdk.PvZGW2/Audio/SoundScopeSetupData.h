#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837890
   RuntimeId:        04FE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0833
   VfTable:          00000001421FA0F0
   Address (Base):   00000001431177F0
*/
#pragma pack(push, 8)
class SoundScopeSetupData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_STDARRAY(struct SoundScopeStrategyMapping) Mappings; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SoundScopeSetupData) == 32);

}
