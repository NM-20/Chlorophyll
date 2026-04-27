#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014287A098
   RuntimeId:        2E78
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D9F
   VfTable:          00000001423E43E0
   Address (Base):   00000001430DFE00
*/
#pragma pack(push, 16)
class PathFollowingComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MovementCorridorRadius; /* 0x0070 */
  char pad_0074[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PathFollowingComponentData) == 128);

}
