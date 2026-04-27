#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>
#include <IcelinSdk.PvZGW2/PVZShared/AiGameMode.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F578
   RuntimeId:        1D9B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          104D
   VfTable:          000000014231D8F8
   Address (Base):   000000014310A7D0
*/
#pragma pack(push, 8)
class IsGameMode : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AiGameMode Mode; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(IsGameMode) == 24);

}
