#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZPlayerIteratorSorterEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865C38
   RuntimeId:        2339
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C4A
   VfTable:          0000000142350AB8
   Address (Base):   00000001430D4330
*/
#pragma pack(push, 8)
class PVZPlayerIteratorScoreSorterEntityData : public PVZPlayerIteratorSorterEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZPlayerIteratorScoreSorterEntityData) == 40);

}
