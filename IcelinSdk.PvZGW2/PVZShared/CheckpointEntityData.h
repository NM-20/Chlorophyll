#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864CF8
   RuntimeId:        224C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AB7
   VfTable:          0000000142352040
   Address (Base):   00000001430E71E0
*/
#pragma pack(push, 8)
class CheckpointEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Wave; /* 0x0018 */
  FB_UINT32 BaseID; /* 0x0020 */
  FB_FLOAT32 BaseDamage; /* 0x0024 */
  FB_CSTRING ChallengeName; /* 0x0028 */
  FB_FLOAT32 BossDamage; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(CheckpointEntityData) == 56);

}
