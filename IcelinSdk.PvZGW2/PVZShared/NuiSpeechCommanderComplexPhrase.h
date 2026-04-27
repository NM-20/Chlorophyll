#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/NuiSpeechComplexPhrase.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862048
   RuntimeId:        2017
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E89
   VfTable:          0000000142344088
   Address (Base):   0000000143108D90
*/
#pragma pack(push, 8)
class NuiSpeechCommanderComplexPhrase : public NuiSpeechComplexPhrase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechCommanderComplexPhrase) == 72);

}
