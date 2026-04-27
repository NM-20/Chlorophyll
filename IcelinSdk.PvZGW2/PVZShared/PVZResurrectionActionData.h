#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZCommanderActionBaseData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863168
   RuntimeId:        20F4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A64
   VfTable:          0000000142353CC0
   Address (Base):   00000001430D03E0
*/
#pragma pack(push, 8)
class PVZResurrectionActionData : public PVZCommanderActionBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PrefabBlueprint) CratePrefabBlueprint; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZResurrectionActionData) == 56);

}
