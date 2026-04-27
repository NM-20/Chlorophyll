#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 00000001428705D8
   RuntimeId:        299B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1988
   Default Value:    0000000142BB5CB0
*/
#pragma pack(push, 16)
struct PreviewCameraOffsets
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 CharacterSpawnScreenOffset; /* 0x0000 */
  Vec3 CharacterCustomizationScreenOffset; /* 0x0010 */
  TeamId Team; /* 0x0020 */
  char pad_0024[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PreviewCameraOffsets) == 48);

}
