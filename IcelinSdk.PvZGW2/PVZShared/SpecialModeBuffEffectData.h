#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C468
   RuntimeId:        26E8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0908
   VfTable:          0000000142366908
   Address (Base):   00000001430F6250
*/
#pragma pack(push, 8)
class SpecialModeBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinPowerThreshold; /* 0x0018 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x001C */
  FB_HANDLE(class AntEnumeration) SpecialMode; /* 0x0020 */
  FB_FLOAT32 AnimSpeedTarget; /* 0x0028 */
  FB_FLOAT32 AnimSpeedBlendDuration; /* 0x002C */
  FB_BOOLEAN AnimSpeed; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SpecialModeBuffEffectData) == 56);

}
