#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DF00
   RuntimeId:        119D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11D2
   VfTable:          0000000142273668
   Address (Base):   00000001430DBB10
*/
#pragma pack(push, 8)
class SoundSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING AudioSystemUri; /* 0x0020 */
  FB_CSTRING VOCommon; /* 0x0028 */
  FB_CSTRING VOEnglish; /* 0x0030 */
  FB_CSTRING VOSpanish; /* 0x0038 */
  FB_CSTRING VOFrench; /* 0x0040 */
  FB_CSTRING VOGerman; /* 0x0048 */
  FB_CSTRING VOItalian; /* 0x0050 */
  FB_BOOLEAN Enable; /* 0x0058 */
  char pad_0059[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(SoundSettings) == 96);

}
