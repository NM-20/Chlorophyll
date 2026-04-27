#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/AreaTriggerEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BF70
   RuntimeId:        0FF2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B72
   VfTable:          0000000142267E78
   Address (Base):   00000001430D6D90
*/
#pragma pack(push, 16)
class GeometryTriggerEntityData : public AreaTriggerEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x00D0 */
  char pad_00D4[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(GeometryTriggerEntityData) == 224);

}
