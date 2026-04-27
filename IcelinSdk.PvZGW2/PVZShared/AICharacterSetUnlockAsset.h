#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UnlockAsset.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869488
   RuntimeId:        2495
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0727
   VfTable:          0000000142355EA8
   Address (Base):   00000001430F7B10
*/
#pragma pack(push, 8)
class AICharacterSetUnlockAsset : public UnlockAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TeamId TeamId; /* 0x0048 */
  char pad_004C[0x0004];
  FB_HANDLE(class AISpawnBlueprints) AISpawnBlueprints; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(AICharacterSetUnlockAsset) == 88);

}
