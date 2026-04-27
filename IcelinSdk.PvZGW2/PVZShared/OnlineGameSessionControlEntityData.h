#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FC90
   RuntimeId:        292C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09F1
   VfTable:          000000014236DE40
   Address (Base):   00000001430E4300
*/
#pragma pack(push, 8)
class OnlineGameSessionControlEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(OnlineGameSessionControlEntityData) == 24);

}
