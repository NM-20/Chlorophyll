#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E378
   RuntimeId:        11D9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F18
   VfTable:          00000001422732E8
   Address (Base):   00000001431115B0
*/
#pragma pack(push, 8)
class SkeletonCollisionData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SkeletonAsset) SkeletonAsset; /* 0x0010 */
  FB_STDARRAY(struct BoneCollisionData) BoneCollisionData; /* 0x0018 */
  MaterialDecl OverrideCharacterEntityMaterialPair; /* 0x0020 */
  MaterialDecl OverrideCharacterPhysicsMaterialPair; /* 0x0024 */
  FB_BOOLEAN FirstBoneCollisionIsParent; /* 0x0028 */
  FB_BOOLEAN OverrideCharacterEntityMaterial; /* 0x0029 */
  FB_BOOLEAN OverrideCharacterPhysicsMaterial; /* 0x002A */
  char pad_002B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SkeletonCollisionData) == 48);

}
