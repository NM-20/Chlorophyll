#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterStateData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851780
   RuntimeId:        149C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0873
   VfTable:          000000014227F3D0
   Address (Base):   00000001430FBD10
*/
#pragma pack(push, 8)
class FallingStateData : public CharacterStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(FallingStateData) == 24);

}
