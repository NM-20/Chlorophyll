#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864C58
   RuntimeId:        2242
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BB7
   VfTable:          0000000142351F28
   Address (Base):   00000001430D0320
*/
#pragma pack(push, 8)
class VaseEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(VaseEntityData) == 24);

}
