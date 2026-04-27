#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/GameDataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AD88
   RuntimeId:        25E6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0966
   VfTable:          000000014235ADC8
   Address (Base):   0000000143106A50
*/
#pragma pack(push, 8)
class DamageFalloffData : public GameDataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 StartDamageMultiplier; /* 0x0010 */
  FB_FLOAT32 EndDamageMultiplier; /* 0x0014 */
  FB_FLOAT32 DamageFalloffStartDistance; /* 0x0018 */
  FB_FLOAT32 DamageFalloffEndDistance; /* 0x001C */
  FB_BOOLEAN DamageFalloffEnabled; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(DamageFalloffData) == 40);

}
