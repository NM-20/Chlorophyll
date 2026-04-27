#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/GameDataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428694E8
   RuntimeId:        249B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0965
   VfTable:          0000000142355E78
   Address (Base):   0000000143107830
*/
#pragma pack(push, 8)
class UnlockListData : public GameDataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class UnlockAssetBase) Unlocks; /* 0x0010 */
  FB_REFARRAY(class UnlockListData) ChildUnlocks; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UnlockListData) == 32);

}
