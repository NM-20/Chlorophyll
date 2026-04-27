#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838E50
   RuntimeId:        0640
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DC2
   VfTable:          00000001421FC620
   Address (Base):   00000001430FE4D0
*/
#pragma pack(push, 16)
class ClothInteractionComponentData : public ComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN ClothCollision; /* 0x0070 */
  char pad_0071[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(ClothInteractionComponentData) == 128);

}
