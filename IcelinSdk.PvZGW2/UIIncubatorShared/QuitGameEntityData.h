#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428764E8
   RuntimeId:        2DBE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          099A
   VfTable:          0000000142393390
   Address (Base):   00000001430E0700
*/
#pragma pack(push, 8)
class QuitGameEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(QuitGameEntityData) == 24);

}
