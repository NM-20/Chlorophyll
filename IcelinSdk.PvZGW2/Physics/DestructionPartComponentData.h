#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850D80
   RuntimeId:        140C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DAD
   VfTable:          000000014227F880
   Address (Base):   00000001430FB9B0
*/
#pragma pack(push, 16)
class DestructionPartComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class GameObjectData) Objects; /* 0x0070 */
  FB_UINT32 PartIndex; /* 0x0078 */
  FB_BOOLEAN Fixed; /* 0x007C */
  FB_BOOLEAN Fragile; /* 0x007D */
  char pad_007E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(DestructionPartComponentData) == 128);

}
