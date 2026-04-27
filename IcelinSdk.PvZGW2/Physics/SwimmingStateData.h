#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterStateData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428517E0
   RuntimeId:        14A2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          086C
   VfTable:          000000014227F3B0
   Address (Base):   00000001430FBBF0
*/
#pragma pack(push, 8)
class SwimmingStateData : public CharacterStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 BodyUnderWater; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SwimmingStateData) == 32);

}
