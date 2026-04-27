#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839CB8
   RuntimeId:        0706
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08E8
   VfTable:          00000001421FF5B8
   Address (Base):   00000001430F1860
*/
#pragma pack(push, 16)
class UpdateCameraProximityData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ForwardOffset; /* 0x0030 */
  char pad_0034[0x000C];
  Vec3 Size; /* 0x0040 */
  Vec3 FadeDistance; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(UpdateCameraProximityData) == 96);

}
