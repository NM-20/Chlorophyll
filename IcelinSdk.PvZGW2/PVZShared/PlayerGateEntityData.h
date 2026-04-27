#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865FD8
   RuntimeId:        236F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AAA
   VfTable:          0000000142350808
   Address (Base):   00000001430E5800
*/
#pragma pack(push, 8)
class PlayerGateEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN Default; /* 0x0018 */
  FB_BOOLEAN IgnoreCustomizationCharacters; /* 0x0019 */
  char pad_001A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PlayerGateEntityData) == 32);

}
