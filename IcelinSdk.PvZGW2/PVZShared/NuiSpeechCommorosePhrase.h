#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/NuiSpeechPhrase.h>
#include <IcelinSdk.PvZGW2/PVZShared/NuiSpeechCommoroseApplicabilityCondition.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861EC8
   RuntimeId:        1FFF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E84
   VfTable:          00000001423440F8
   Address (Base):   0000000143109090
*/
#pragma pack(push, 8)
class NuiSpeechCommorosePhrase : public NuiSpeechPhrase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING CommoRoseButton; /* 0x0040 */
  NuiSpeechCommoroseApplicabilityCondition ApplicabilityCondition; /* 0x0048 */
  char pad_004C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechCommorosePhrase) == 80);

}
