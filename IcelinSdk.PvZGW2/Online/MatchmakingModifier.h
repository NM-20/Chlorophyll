#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858A90
   RuntimeId:        1A71
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F57
   VfTable:          00000001422D57B8
   Address (Base):   00000001430FA450
*/
#pragma pack(push, 8)
class MatchmakingModifier : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(MatchmakingModifier) == 16);

}
