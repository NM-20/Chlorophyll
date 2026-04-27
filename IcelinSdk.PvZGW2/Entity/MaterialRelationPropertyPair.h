#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BCD8
   RuntimeId:        0946
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CC948
   Default Value:    000000014283BCF0
*/
#pragma pack(push, 8)
struct MaterialRelationPropertyPair
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_REFARRAY(class PhysicsMaterialRelationPropertyData) PhysicsMaterialProperties; /* 0x0000 */
  FB_REFARRAY(class PhysicsPropertyRelationPropertyData) PhysicsPropertyProperties; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(MaterialRelationPropertyPair) == 16);

}
