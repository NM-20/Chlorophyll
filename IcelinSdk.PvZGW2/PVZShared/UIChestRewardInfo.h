#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIChestRewardItem.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871558
   RuntimeId:        2A5D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E96
   VfTable:          000000014236C9A8
   Address (Base):   00000001430D8C90
*/
#pragma pack(push, 8)
class UIChestRewardInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UIChestRewardItem Reward; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(UIChestRewardInfo) == 128);

}
