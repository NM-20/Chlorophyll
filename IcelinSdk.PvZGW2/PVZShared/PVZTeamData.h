#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428658D8
   RuntimeId:        2303
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0761
   VfTable:          0000000142351138
   Address (Base):   00000001430F83B0
*/
#pragma pack(push, 8)
class PVZTeamData : public TeamData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SelectionSetTree) SelectionSets; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZTeamData) == 56);

}
