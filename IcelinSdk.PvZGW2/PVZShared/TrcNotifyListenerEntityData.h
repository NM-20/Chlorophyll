#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865618
   RuntimeId:        22D7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C0B
   VfTable:          0000000142351210
   Address (Base):   00000001430E5A40
*/
#pragma pack(push, 8)
class TrcNotifyListenerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TrcNotifyListenerEntityData) == 24);

}
