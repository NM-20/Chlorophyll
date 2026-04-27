#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CharacterBlueprint.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862918
   RuntimeId:        209C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          079A
   VfTable:          00000001423439F8
   Address (Base):   00000001430F8830
*/
#pragma pack(push, 8)
class PVZCharacterBlueprint : public CharacterBlueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterBlueprint) == 80);

}
