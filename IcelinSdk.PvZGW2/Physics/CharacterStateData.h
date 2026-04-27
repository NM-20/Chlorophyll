#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851680
   RuntimeId:        148C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          086B
   VfTable:          000000014227F450
   Address (Base):   00000001430BC920
*/
#pragma pack(push, 8)
class CharacterStateData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class CharacterStatePoseInfo) PoseInfo; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(CharacterStateData) == 24);

}
