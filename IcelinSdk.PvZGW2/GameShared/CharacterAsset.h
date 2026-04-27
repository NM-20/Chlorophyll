#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CharacterBlueprint.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D898
   RuntimeId:        1149
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          079B
   VfTable:          0000000142273C90
   Address (Base):   0000000143111AF0
*/
#pragma pack(push, 8)
class CharacterAsset : public CharacterBlueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(CharacterAsset) == 80);

}
