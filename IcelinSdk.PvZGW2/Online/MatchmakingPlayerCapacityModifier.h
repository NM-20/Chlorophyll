#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/MatchmakingModifier.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858AB0
   RuntimeId:        1A73
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F58
   VfTable:          00000001422D57A8
   Address (Base):   000000014310CC30
*/
#pragma pack(push, 8)
class MatchmakingPlayerCapacityModifier : public MatchmakingModifier
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Attribute; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MatchmakingPlayerCapacityModifier) == 24);

}
