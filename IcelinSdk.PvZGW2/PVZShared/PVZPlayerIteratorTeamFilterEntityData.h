#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZPlayerIteratorFilterEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865B58
   RuntimeId:        232B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AB4
   VfTable:          0000000142350E38
   Address (Base):   00000001430E79C0
*/
#pragma pack(push, 8)
class PVZPlayerIteratorTeamFilterEntityData : public PVZPlayerIteratorFilterEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(enum TeamId) ValidTeams; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZPlayerIteratorTeamFilterEntityData) == 40);

}
