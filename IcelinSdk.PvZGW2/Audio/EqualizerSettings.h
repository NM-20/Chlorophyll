#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428377F0
   RuntimeId:        04F4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11EB
   VfTable:          00000001421FA130
   Address (Base):   00000001430F2E80
*/
#pragma pack(push, 8)
class EqualizerSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 LowShelfFrequency; /* 0x0010 */
  FB_FLOAT32 LowShelfGain; /* 0x0014 */
  FB_FLOAT32 HighShelfFrequency; /* 0x0018 */
  FB_FLOAT32 HighShelfGain; /* 0x001C */
  FB_FLOAT32 HpCutoffFrequency; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(EqualizerSettings) == 40);

}
