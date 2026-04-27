#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZPlayerIteratorFilterEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/PVZShared/HealthStateFilter.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865BD8
   RuntimeId:        2333
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AB0
   VfTable:          0000000142350D58
   Address (Base):   00000001430D43F0
*/
#pragma pack(push, 8)
class PVZPlayerIteratorHealthStateFilterEntityData : public PVZPlayerIteratorFilterEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  HealthStateFilter HealthState; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZPlayerIteratorHealthStateFilterEntityData) == 32);

}
