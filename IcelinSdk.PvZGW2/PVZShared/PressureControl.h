#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/RecoveryTimes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874528
   RuntimeId:        2C5C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E46
   VfTable:          0000000142378788
   Address (Base):   00000001431041D0
*/
#pragma pack(push, 8)
class PressureControl : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Pressure; /* 0x0010 */
  FB_FLOAT32 PressureDuration; /* 0x0014 */
  RecoveryTimes RecoveryTimes; /* 0x0018 */
  FB_BOOLEAN RequiresPressure; /* 0x0020 */
  FB_BOOLEAN RequiresPressureToEquip; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PressureControl) == 40);

}
