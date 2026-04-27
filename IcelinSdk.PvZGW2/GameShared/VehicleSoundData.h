#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CF80
   RuntimeId:        10CA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F6C
   VfTable:          0000000142267160
   Address (Base):   00000001431123F0
*/
#pragma pack(push, 8)
class VehicleSoundData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundAsset) BulletImpact; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(VehicleSoundData) == 24);

}
