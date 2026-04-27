#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZResurrectionActionData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428631A8
   RuntimeId:        20F8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A65
   VfTable:          0000000142353C88
   Address (Base):   00000001430E6E20
*/
#pragma pack(push, 8)
class PVZSpotTargetsActionData : public PVZResurrectionActionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZSpotTargetsActionData) == 56);

}
