#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PrefabBlueprint.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A608
   RuntimeId:        07DB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0793
   VfTable:          000000014220C400
   Address (Base):   00000001431154B0
*/
#pragma pack(push, 8)
class LogicPrefabBlueprint : public PrefabBlueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(LogicPrefabBlueprint) == 80);

}
