#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D608
   RuntimeId:        2800
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FCB
   VfTable:          000000014236F750
   Address (Base):   0000000143105AF0
*/
#pragma pack(push, 8)
class WeaponSpeedData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ZoomOutSpeed; /* 0x0010 */
  FB_FLOAT32 ZoomInSpeed; /* 0x0014 */
  FB_FLOAT32 UnDeploySpeed; /* 0x0018 */
  FB_FLOAT32 DeploySpeed; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WeaponSpeedData) == 32);

}
