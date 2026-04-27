#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837950
   RuntimeId:        050A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0600
   VfTable:          00000001421FA0B0
   Address (Base):   0000000143117790
*/
#pragma pack(push, 8)
class AudioGuideKeyframe : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Time; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AudioGuideKeyframe) == 24);

}
