#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameDataContainerAsset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D8C0
   RuntimeId:        2824
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0810
   VfTable:          000000014236F398
   Address (Base):   0000000143105970
*/
#pragma pack(push, 8)
class ProjectileKey : public GameDataContainerAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 HashKey; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ProjectileKey) == 40);

}
