#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZProxyAnimatableCopy.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZGameStateCopyAntBinding.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862818
   RuntimeId:        208C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09A4
   VfTable:          00000001423439C0
   Address (Base):   00000001430E8200
*/
#pragma pack(push, 8)
class PVZGameStateCopyEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZProxyAnimatableCopy ProxyAnimatable; /* 0x0018 */
  PVZGameStateCopyAntBinding Binding; /* 0x001C */
  FB_BOOLEAN Enabled; /* 0x0044 */
  char pad_0045[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZGameStateCopyEntityData) == 72);

}
