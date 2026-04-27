#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PrefabBlueprint.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A5E8
   RuntimeId:        07D9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          078F
   VfTable:          000000014220C430
   Address (Base):   00000001430FDFF0
*/
#pragma pack(push, 8)
class SpatialPrefabBlueprint : public PrefabBlueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(SpatialPrefabBlueprint) == 80);

}
