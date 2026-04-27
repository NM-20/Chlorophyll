#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D5E8
   RuntimeId:        27FE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1280
   VfTable:          000000014236F9E0
   Address (Base):   0000000143105B50
*/
#pragma pack(push, 8)
class WeaponOffsetData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 WeaponOffsetX; /* 0x0010 */
  FB_FLOAT32 WeaponOffsetY; /* 0x0014 */
  FB_FLOAT32 WeaponOffsetZ; /* 0x0018 */
  FB_FLOAT32 WeaponZoomedOffsetX; /* 0x001C */
  FB_FLOAT32 WeaponZoomedOffsetY; /* 0x0020 */
  FB_FLOAT32 WeaponZoomedOffsetZ; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(WeaponOffsetData) == 40);

}
