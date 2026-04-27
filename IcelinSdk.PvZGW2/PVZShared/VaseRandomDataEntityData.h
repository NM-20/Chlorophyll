#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864B98
   RuntimeId:        2236
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C16
   VfTable:          00000001423521F0
   Address (Base):   00000001430F85F0
*/
#pragma pack(push, 8)
class VaseRandomDataEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VaseRandomDataDefinition) Definition; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VaseRandomDataEntityData) == 32);

}
