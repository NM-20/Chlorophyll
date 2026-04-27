#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameDataContainerAsset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B450
   RuntimeId:        2620
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          080F
   VfTable:          000000014235ACD0
   Address (Base):   00000001431068D0
*/
#pragma pack(push, 8)
class WeaponFiringDataAsset : public GameDataContainerAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WeaponFiringDataAsset) == 32);

}
