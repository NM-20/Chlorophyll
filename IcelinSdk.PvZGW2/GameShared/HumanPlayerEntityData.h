#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/HumanPlayerProxyEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849220
   RuntimeId:        0D62
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A81
   VfTable:          0000000142260358
   Address (Base):   00000001430EE740
*/
#pragma pack(push, 8)
class HumanPlayerEntityData : public HumanPlayerProxyEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 PlayerKilledDelay; /* 0x0020 */
  FB_FLOAT32 PostReviveShortRespawnTime; /* 0x0024 */
  FB_INT32 MaxReviveCount; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(HumanPlayerEntityData) == 48);

}
