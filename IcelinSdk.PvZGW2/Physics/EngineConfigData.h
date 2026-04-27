#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Physics/Boost.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851230
   RuntimeId:        144E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1004
   VfTable:          000000014227F608
   Address (Base):   00000001430DB7B0
*/
#pragma pack(push, 16)
class EngineConfigData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_FLOAT32) RpmCurvePoints; /* 0x0010 */
  FB_STDARRAY(FB_FLOAT32) TorqueCurvePoints; /* 0x0018 */
  Vec3 Position; /* 0x0020 */
  FB_FLOAT32 RpmMin; /* 0x0030 */
  FB_FLOAT32 RpmMax; /* 0x0034 */
  FB_FLOAT32 RpmCut; /* 0x0038 */
  FB_FLOAT32 EnginePowerMultiplier; /* 0x003C */
  FB_FLOAT32 InternalAccelerationFactor; /* 0x0040 */
  FB_FLOAT32 InternalDeaccelerationFactor; /* 0x0044 */
  FB_FLOAT32 MaxReverseSpeed; /* 0x0048 */
  Boost Boost; /* 0x004C */
  FB_FLOAT32 MaxVehicleHeightOffset; /* 0x0064 */
  char pad_0068[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(EngineConfigData) == 112);

}
