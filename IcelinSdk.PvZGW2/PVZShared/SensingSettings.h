#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873998
   RuntimeId:        2C04
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          068E
   VfTable:          00000001423790A0
   Address (Base):   00000001431044D0
*/
#pragma pack(push, 8)
class SensingSettings : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ViewAngle; /* 0x0018 */
  FB_FLOAT32 ViewDistance; /* 0x001C */
  FB_FLOAT64 SensingTimeSpan; /* 0x0020 */
  FB_FLOAT64 AttackerTrackTime; /* 0x0028 */
  FB_FLOAT32 DamageTakenEventMaxTime; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SensingSettings) == 56);

}
