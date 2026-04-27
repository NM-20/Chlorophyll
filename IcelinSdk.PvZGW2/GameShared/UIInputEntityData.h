#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849420
   RuntimeId:        0D82
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A70
   VfTable:          0000000142260160
   Address (Base):   00000001430EDD80
*/
#pragma pack(push, 8)
class UIInputEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIInputEntityData) == 24);

}
