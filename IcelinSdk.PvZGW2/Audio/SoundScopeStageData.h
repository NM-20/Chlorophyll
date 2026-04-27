#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837830
   RuntimeId:        04F8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10F8
   VfTable:          00000001421FA110
   Address (Base):   00000001430DCC50
*/
#pragma pack(push, 8)
class SoundScopeStageData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(SoundScopeStageData) == 16);

}
