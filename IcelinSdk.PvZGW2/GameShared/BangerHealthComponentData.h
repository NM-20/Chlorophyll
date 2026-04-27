#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GameHealthComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D688
   RuntimeId:        1131
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D09
   VfTable:          0000000142273DF0
   Address (Base):   00000001430D6490
*/
#pragma pack(push, 16)
class BangerHealthComponentData : public GameHealthComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(BangerHealthComponentData) == 112);

}
