#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundTestTaskSpec.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Audio/SoundTestTransformBehavior.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836810
   RuntimeId:        03FD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F1D
   VfTable:          00000001421F4A98
   Address (Base):   0000000143118870
*/
#pragma pack(push, 16)
class SoundTestTransformTask : public SoundTestTaskSpec
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 InitialPosition; /* 0x0020 */
  SoundTestTransformBehavior Behavior; /* 0x0030 */
  FB_BOOLEAN RelativeListener; /* 0x0034 */
  char pad_0035[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(SoundTestTransformTask) == 64);

}
