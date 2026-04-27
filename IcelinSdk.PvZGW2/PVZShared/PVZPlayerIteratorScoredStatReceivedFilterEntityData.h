#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZPlayerIteratorFilterEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865C18
   RuntimeId:        2337
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AB2
   VfTable:          0000000142350B00
   Address (Base):   00000001430D4390
*/
#pragma pack(push, 8)
class PVZPlayerIteratorScoredStatReceivedFilterEntityData : public PVZPlayerIteratorFilterEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZPlayerIteratorScoredStatReceivedFilterEntityData) == 32);

}
