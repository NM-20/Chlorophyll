#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundTestTaskSpec.h>

namespace fb
{

/* TypeInfo (Array): 00000001428367D0
   RuntimeId:        03F9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F1C
   VfTable:          00000001421F4AA8
   Address (Base):   00000001431188D0
*/
#pragma pack(push, 8)
class SoundTestEventTask : public SoundTestTaskSpec
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING EventName; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SoundTestEventTask) == 40);

}
