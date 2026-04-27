#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ControllableHealthComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CE38
   RuntimeId:        10BE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D0F
   VfTable:          00000001422671B8
   Address (Base):   00000001430D6DF0
*/
#pragma pack(push, 16)
class VehicleHealthComponentData : public ControllableHealthComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ForceMinDamageAngleRadius; /* 0x0070 */
  char pad_0074[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(VehicleHealthComponentData) == 128);

}
