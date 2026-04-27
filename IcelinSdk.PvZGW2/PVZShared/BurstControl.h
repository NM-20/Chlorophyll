#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/BurstLimit.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874508
   RuntimeId:        2C5A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0846
   VfTable:          00000001423788F8
   Address (Base):   0000000143104230
*/
#pragma pack(push, 8)
class BurstControl : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  BurstLimit BurstLimitNear; /* 0x0010 */
  BurstLimit BurstLimitFar; /* 0x0018 */
  FB_FLOAT32 MinBurstCoolDownTime; /* 0x0020 */
  FB_FLOAT32 MaxBurstCoolDownTime; /* 0x0024 */
  FB_FLOAT32 MaxTriggerHoldTime; /* 0x0028 */
  FB_BOOLEAN FireEntireBurst; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(BurstControl) == 48);

}
