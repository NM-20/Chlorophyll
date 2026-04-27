#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CBA8
   RuntimeId:        275C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0915
   VfTable:          00000001423662C0
   Address (Base):   00000001430D9590
*/
#pragma pack(push, 8)
class HypnoControlsBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MoveLag; /* 0x0018 */
  FB_FLOAT32 MovePushFrequency; /* 0x001C */
  FB_FLOAT32 MovePushStrength; /* 0x0020 */
  FB_FLOAT32 AimScaleFrequency; /* 0x0024 */
  FB_FLOAT32 AimScaleStrength; /* 0x0028 */
  FB_FLOAT32 AimScaleOffset; /* 0x002C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(HypnoControlsBuffEffectData) == 48);

}
