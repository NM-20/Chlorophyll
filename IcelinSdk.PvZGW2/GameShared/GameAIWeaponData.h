#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F5A0
   RuntimeId:        12D3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0691
   VfTable:          0000000142276560
   Address (Base):   00000001430FC8B0
*/
#pragma pack(push, 8)
class GameAIWeaponData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(GameAIWeaponData) == 24);

}
