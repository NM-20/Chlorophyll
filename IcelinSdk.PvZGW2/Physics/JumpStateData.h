#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterStateData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428517C0
   RuntimeId:        14A0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          086F
   VfTable:          000000014227F3A0
   Address (Base):   00000001430FBC50
*/
#pragma pack(push, 8)
class JumpStateData : public CharacterStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 JumpHeight; /* 0x0018 */
  FB_FLOAT32 JumpEffectSize; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(JumpStateData) == 32);

}
