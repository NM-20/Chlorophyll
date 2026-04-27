#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428713E8
   RuntimeId:        2A4D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C35
   VfTable:          000000014236CB90
   Address (Base):   00000001430E3760
*/
#pragma pack(push, 8)
class ClientUIFriendsInfoEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 GroupIndex; /* 0x0018 */
  char pad_001C[0x0004];
  FB_UINT64 TargetGameId; /* 0x0020 */
  FB_INT64 TargetGroupLeaderId; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ClientUIFriendsInfoEntityData) == 48);

}
