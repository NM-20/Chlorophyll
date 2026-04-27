#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UnlockAssetBase.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C840
   RuntimeId:        106A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0726
   VfTable:          0000000142267818
   Address (Base):   00000001430BD720
*/
#pragma pack(push, 8)
class UnlockAsset : public UnlockAssetBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UnlockAsset) == 72);

}
