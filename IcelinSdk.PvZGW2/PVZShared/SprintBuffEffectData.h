#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C988
   RuntimeId:        273A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          091D
   VfTable:          0000000142366410
   Address (Base):   00000001430D96B0
*/
#pragma pack(push, 8)
class SprintBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SprintSpeed; /* 0x0018 */
  FB_FLOAT32 TimeAtMaxSpeed; /* 0x001C */
  FB_FLOAT32 TimeInBleedOff; /* 0x0020 */
  FB_FLOAT32 PrimingTime; /* 0x0024 */
  FB_BOOLEAN AllowPitchUp; /* 0x0028 */
  FB_BOOLEAN AllowPitchDown; /* 0x0029 */
  FB_BOOLEAN InAirOnly; /* 0x002A */
  char pad_002B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SprintBuffEffectData) == 48);

}
