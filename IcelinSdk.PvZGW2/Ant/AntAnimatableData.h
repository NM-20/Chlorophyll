#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 00000001428355D8
   RuntimeId:        02E6
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BC3A0
   Default Value:    0000000142BEBD90
*/
#pragma pack(push, 8)
struct AntAnimatableData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef Actor; /* 0x0000 */
  AntRef SceneOpMatrix; /* 0x0014 */
  AntRef CollisionWorld; /* 0x0028 */
  AntRef RightHandEffectorDisableOverride; /* 0x003C */
  AntRef LeftHandEffectorDisableOverride; /* 0x0050 */
  char pad_0064[0x0004];
  FB_HANDLE(class MasterSkeletonAsset) MasterSkeletonAsset; /* 0x0068 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(AntAnimatableData) == 112);

}
