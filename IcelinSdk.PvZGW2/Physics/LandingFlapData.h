#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428510D8
   RuntimeId:        143A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1105
   VfTable:          000000014227F6A0
   Address (Base):   000000014310F570
*/
#pragma pack(push, 8)
class LandingFlapData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ActivationHeight; /* 0x0010 */
  FB_FLOAT32 HeightTolerance; /* 0x0014 */
  FB_FLOAT32 ActivationVelocity; /* 0x0018 */
  FB_FLOAT32 VelocityTolerance; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(LandingFlapData) == 32);

}
