#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428708D0
   RuntimeId:        29C9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CA2
   VfTable:          000000014236D330
   Address (Base):   00000001430E1C60
*/
#pragma pack(push, 8)
class UnboundControllerListenerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN DefaultEnabled; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UnboundControllerListenerEntityData) == 32);

}
