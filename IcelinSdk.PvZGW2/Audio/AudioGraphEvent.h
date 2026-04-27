#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphParameter.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835FA8
   RuntimeId:        0379
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1191
   VfTable:          00000001421F15B0
   Address (Base):   00000001431191D0
*/
#pragma pack(push, 8)
class AudioGraphEvent : public AudioGraphParameter
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AudioGraphEvent) == 32);

}
