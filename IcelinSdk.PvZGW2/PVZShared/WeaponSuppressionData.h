#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B3F0
   RuntimeId:        261A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1173
   VfTable:          000000014235AD00
   Address (Base):   0000000143106930
*/
#pragma pack(push, 8)
class WeaponSuppressionData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MaxMultiplier; /* 0x0010 */
  FB_FLOAT32 MinMultiplier; /* 0x0014 */
  FB_FLOAT32 MinDistance; /* 0x0018 */
  FB_FLOAT32 MaxDistance; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WeaponSuppressionData) == 32);

}
