#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428708B0
   RuntimeId:        29C7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09D0
   VfTable:          000000014236D368
   Address (Base):   00000001430E2860
*/
#pragma pack(push, 8)
class PlayerSelectEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN OverrideValidPlayer; /* 0x0018 */
  FB_BOOLEAN DebugOnly; /* 0x0019 */
  char pad_001A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PlayerSelectEntityData) == 32);

}
