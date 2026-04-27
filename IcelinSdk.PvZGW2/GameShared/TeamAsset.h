#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428491A0
   RuntimeId:        0D5A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          075F
   VfTable:          0000000142260458
   Address (Base):   00000001430FD810
*/
#pragma pack(push, 8)
class TeamAsset : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TeamAsset) == 24);

}
