#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286ADE8
   RuntimeId:        25EC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3288
   Default Value:    0000000142BB4FE0
*/
#pragma pack(push, 8)
struct ProjectileConfigData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class ProjectileEntityData) ProjectileData; /* 0x0000 */
  FB_HANDLE(class ProjectileBlueprint) Projectile; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ProjectileConfigData) == 16);

}
