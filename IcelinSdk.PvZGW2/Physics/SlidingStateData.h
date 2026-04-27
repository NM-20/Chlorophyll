#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterStateData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428516C0
   RuntimeId:        1490
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          086D
   VfTable:          000000014227F430
   Address (Base):   00000001430FBEF0
*/
#pragma pack(push, 8)
class SlidingStateData : public CharacterStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 HorizontalInputScale; /* 0x0018 */
  FB_FLOAT32 GravityScale; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SlidingStateData) == 32);

}
