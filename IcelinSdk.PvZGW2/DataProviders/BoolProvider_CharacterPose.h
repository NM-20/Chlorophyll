#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterPoseType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834918
   RuntimeId:        021E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          107C
   VfTable:          00000001421ECC20
   Address (Base):   000000014311B6F0
*/
#pragma pack(push, 8)
class BoolProvider_CharacterPose : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityProvider) Character; /* 0x0010 */
  CharacterPoseType Pose; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_CharacterPose) == 32);

}
