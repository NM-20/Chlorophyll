#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/NuiSpeechPhrase.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861F48
   RuntimeId:        2007
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E85
   VfTable:          00000001423440D8
   Address (Base):   0000000143108F70
*/
#pragma pack(push, 8)
class NuiSpeechDirectPhrase : public NuiSpeechPhrase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechDirectPhrase) == 64);

}
