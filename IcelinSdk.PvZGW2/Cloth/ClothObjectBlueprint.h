#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ObjectBlueprint.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838DF0
   RuntimeId:        063A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          079D
   VfTable:          00000001421FC6B0
   Address (Base):   00000001430FE590
*/
#pragma pack(push, 8)
class ClothObjectBlueprint : public ObjectBlueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ClothObjectBlueprint) == 72);

}
