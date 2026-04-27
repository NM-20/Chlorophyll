#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Audio/MusicFadeType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837D30
   RuntimeId:        0548
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FE3
   VfTable:          00000001421F9B38
   Address (Base):   00000001430F2880
*/
#pragma pack(push, 8)
class MusicFadeData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 FadeOutLength; /* 0x0010 */
  MusicFadeType FadeOutType; /* 0x0014 */
  FB_FLOAT32 FadeInLength; /* 0x0018 */
  MusicFadeType FadeInType; /* 0x001C */
  FB_BOOLEAN EqualPower; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MusicFadeData) == 40);

}
