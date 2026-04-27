#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundTestTaskSpec.h>
#include <IcelinSdk.PvZGW2/Audio/SoundTestParamBehavior.h>

namespace fb
{

/* TypeInfo (Array): 00000001428367B0
   RuntimeId:        03F7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F1E
   VfTable:          00000001421F4AB8
   Address (Base):   0000000143118930
*/
#pragma pack(push, 8)
class SoundTestParamTask : public SoundTestTaskSpec
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ParamName; /* 0x0020 */
  SoundTestParamBehavior Behavior; /* 0x0028 */
  FB_FLOAT32 RangeMin; /* 0x002C */
  FB_FLOAT32 RangeMax; /* 0x0030 */
  FB_FLOAT32 InitialValue; /* 0x0034 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SoundTestParamTask) == 56);

}
