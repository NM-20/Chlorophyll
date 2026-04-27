#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428648A8
   RuntimeId:        221B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09D4
   VfTable:          00000001423522E0
   Address (Base):   00000001430D4690
*/
#pragma pack(push, 8)
class PVZSurvivalEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZSurvivalEntityData) == 24);

}
