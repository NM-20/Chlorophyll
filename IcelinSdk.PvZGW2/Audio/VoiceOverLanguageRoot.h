#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838A70
   RuntimeId:        0616
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E95
   VfTable:          00000001421F95A8
   Address (Base):   0000000143116410
*/
#pragma pack(push, 8)
class VoiceOverLanguageRoot : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class AudioLanguage) Language; /* 0x0010 */
  FB_CSTRING Path; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverLanguageRoot) == 32);

}
