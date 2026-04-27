#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterStateData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851740
   RuntimeId:        1498
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          086E
   VfTable:          000000014227F410
   Address (Base):   00000001430FBDD0
*/
#pragma pack(push, 8)
class HoverStateData : public CharacterStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 HoverDuration; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(HoverStateData) == 32);

}
