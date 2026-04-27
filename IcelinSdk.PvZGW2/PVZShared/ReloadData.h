#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Entity/GameplayBones.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B228
   RuntimeId:        2610
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8AC0
   Default Value:    000000014286B240
*/
#pragma pack(push, 16)
struct ReloadData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 Offset; /* 0x0000 */
  Vec3 Rotation; /* 0x0010 */
  GameplayBones Bone; /* 0x0020 */
  char pad_0024[0x0004];
  FB_HANDLE(class EffectBlueprint) Effect; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ReloadData) == 48);

}
