#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 000000014284ADC8
   RuntimeId:        0EF7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11D5
   VfTable:          0000000142262998
   Address (Base):   00000001430BE2B0
*/
#pragma pack(push, 8)
class GameAnimationSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) AntOnClientOnlyGamemodes; /* 0x0020 */
  FB_FLOAT32 TemporalLoddingFirstDeltaTime; /* 0x0028 */
  FB_FLOAT32 TemporalLoddingSecondDeltaTime; /* 0x002C */
  FB_FLOAT32 TemporalLoddingThirdDeltaTime; /* 0x0030 */
  FB_FLOAT32 TemporalLoddingFourthDeltaTime; /* 0x0034 */
  FB_FLOAT32 TemporalLoddingFifthDeltaTime; /* 0x0038 */
  FB_FLOAT32 TemporalLoddingSixthDeltaTime; /* 0x003C */
  FB_FLOAT32 TemporalLoddingFirstDistance; /* 0x0040 */
  FB_FLOAT32 TemporalLoddingSecondDistance; /* 0x0044 */
  FB_FLOAT32 TemporalLoddingThirdDistance; /* 0x0048 */
  FB_FLOAT32 TemporalLoddingFourthDistance; /* 0x004C */
  FB_FLOAT32 TemporalLoddingFifthDistance; /* 0x0050 */
  FB_FLOAT32 TemporalLoddingSixthDistance; /* 0x0054 */
  FB_FLOAT32 TemporalLoddingFarDistance; /* 0x0058 */
  FB_BOOLEAN ServerEnable; /* 0x005C */
  FB_BOOLEAN ClientEnable; /* 0x005D */
  FB_BOOLEAN UseRawGamepadInput; /* 0x005E */
  char pad_005F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(GameAnimationSettings) == 96);

}
