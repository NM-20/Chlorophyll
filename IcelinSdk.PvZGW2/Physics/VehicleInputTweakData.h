#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Physics/VehicleInputTweakType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428511B8
   RuntimeId:        1448
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E2C
   VfTable:          000000014227F628
   Address (Base):   000000014310F390
*/
#pragma pack(push, 8)
class VehicleInputTweakData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VehicleInputTweakType InputTweakType; /* 0x0010 */
  FB_FLOAT32 MinSpeed; /* 0x0014 */
  FB_FLOAT32 MaxSpeed; /* 0x0018 */
  FB_FLOAT32 MinSpeedScale; /* 0x001C */
  FB_FLOAT32 MaxSpeedScale; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(VehicleInputTweakData) == 40);

}
