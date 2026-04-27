#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FF90
   RuntimeId:        1360
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BFB
   VfTable:          0000000142279028
   Address (Base):   00000001430EB920
*/
#pragma pack(push, 8)
class SyncedBoolEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN AlwaysSend; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SyncedBoolEntityData) == 32);

}
