#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C4E8
   RuntimeId:        26F0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          092D
   VfTable:          0000000142366710
   Address (Base):   00000001430F6A30
*/
#pragma pack(push, 8)
class BuffSpreaderBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BuffData) Buff; /* 0x0018 */
  FB_FLOAT32 Period; /* 0x0020 */
  FB_FLOAT32 Radius; /* 0x0024 */
  FB_FLOAT32 VerticalOffset; /* 0x0028 */
  FB_FLOAT32 FieldOfView; /* 0x002C */
  FB_FLOAT32 MinPowerThreshold; /* 0x0030 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x0034 */
  FB_INT32 ApplicationLimit; /* 0x0038 */
  FB_BOOLEAN ApplyAtStartOfPeriod; /* 0x003C */
  FB_BOOLEAN SpreadOnTrigger; /* 0x003D */
  FB_BOOLEAN CheckRadiusToCenter; /* 0x003E */
  char pad_003F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(BuffSpreaderBuffEffectData) == 64);

}
