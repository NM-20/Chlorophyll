#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F980
   RuntimeId:        1311
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BA7E0
   Default Value:    000000014284F9A0
*/
#pragma pack(push, 16)
struct MorphTintPresetChannel
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 DiffuseColor; /* 0x0000 */
  Vec3 SpecularColor; /* 0x0010 */
  FB_FLOAT32 DiffuseOpacity; /* 0x0020 */
  FB_FLOAT32 DiffuseIntensity; /* 0x0024 */
  FB_FLOAT32 SpecularOpacity; /* 0x0028 */
  FB_FLOAT32 SpecularIntensity; /* 0x002C */
  FB_BOOLEAN PresetEnabled; /* 0x0030 */
  char pad_0031[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(MorphTintPresetChannel) == 64);

}
