#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Morph/MorphBaseSlider.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FC38
   RuntimeId:        1337
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E22
   VfTable:          00000001422770C8
   Address (Base):   00000001431103B0
*/
#pragma pack(push, 8)
class MorphShape : public MorphBaseSlider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 TargetMax; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MorphShape) == 40);

}
