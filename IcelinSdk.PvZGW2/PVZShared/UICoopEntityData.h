#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870CA0
   RuntimeId:        29FD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ADB
   VfTable:          000000014236CF78
   Address (Base):   00000001430E3880
*/
#pragma pack(push, 8)
class UICoopEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UICoopEntityData) == 24);

}
