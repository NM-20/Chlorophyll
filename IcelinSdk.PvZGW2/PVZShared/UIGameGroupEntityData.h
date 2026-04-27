#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870A80
   RuntimeId:        29DF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A24
   VfTable:          000000014236D188
   Address (Base):   00000001430E3C40
*/
#pragma pack(push, 8)
class UIGameGroupEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING TargetPlayerName; /* 0x0018 */
  FB_BOOLEAN OfflineActivityBlock; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIGameGroupEntityData) == 40);

}
