#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UnlockAssetBase.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C860
   RuntimeId:        106C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0722
   VfTable:          00000001422677E8
   Address (Base):   00000001430DBE10
*/
#pragma pack(push, 8)
class MultiUnlockAsset : public UnlockAssetBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class UnlockAssetBase) Unlocks; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(MultiUnlockAsset) == 80);

}
