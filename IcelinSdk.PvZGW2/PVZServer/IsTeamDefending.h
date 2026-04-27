#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F098
   RuntimeId:        1D4D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1057
   VfTable:          000000014231DF38
   Address (Base):   000000014310B670
*/
#pragma pack(push, 8)
class IsTeamDefending : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(IsTeamDefending) == 16);

}
