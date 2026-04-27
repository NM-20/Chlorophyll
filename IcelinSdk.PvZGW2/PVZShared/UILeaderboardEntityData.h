#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870C60
   RuntimeId:        29F9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C62
   VfTable:          000000014236CF40
   Address (Base):   00000001430E3940
*/
#pragma pack(push, 8)
class UILeaderboardEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING LeaderboardName; /* 0x0018 */
  FB_INT32 Size; /* 0x0020 */
  FB_INT32 Start; /* 0x0024 */
  FB_INT32 Filter; /* 0x0028 */
  TeamId Team; /* 0x002C */
  FB_UINT32 CharacterIndex; /* 0x0030 */
  FB_INT32 RowIndex; /* 0x0034 */
  FB_BOOLEAN Centered; /* 0x0038 */
  FB_BOOLEAN IsRowEntity; /* 0x0039 */
  char pad_003A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UILeaderboardEntityData) == 64);

}
