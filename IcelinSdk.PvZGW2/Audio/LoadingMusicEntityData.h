#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837BF0
   RuntimeId:        0534
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09F6
   VfTable:          00000001421F9BD0
   Address (Base):   00000001430F29A0
*/
#pragma pack(push, 8)
class LoadingMusicEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_GUID SoundGuid; /* 0x0018 */
  FB_CSTRING BundleUniqueId; /* 0x0028 */
  FB_BOOLEAN LoadOnCreation; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(LoadingMusicEntityData) == 56);

}
