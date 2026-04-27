#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterStateData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428516A0
   RuntimeId:        148E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0875
   VfTable:          000000014227F420
   Address (Base):   00000001430FBF50
*/
#pragma pack(push, 8)
class AnimationControlledStateData : public CharacterStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 UpNormalTolerance; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AnimationControlledStateData) == 32);

}
