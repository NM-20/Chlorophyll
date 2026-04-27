#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZPlayerIteratorFilterEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/PVZShared/PlayerType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865B98
   RuntimeId:        232F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AB3
   VfTable:          0000000142350DC8
   Address (Base):   00000001430E7960
*/
#pragma pack(push, 8)
class PVZPlayerIteratorPlayerTypeFilterEntityData : public PVZPlayerIteratorFilterEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  PlayerType ValidPlayerType; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZPlayerIteratorPlayerTypeFilterEntityData) == 32);

}
