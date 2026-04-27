#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UnlockAssetBase.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C940
   RuntimeId:        107A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0725
   VfTable:          00000001422677A8
   Address (Base):   00000001430DBC90
*/
#pragma pack(push, 8)
class ValueUnlockAsset : public UnlockAssetBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class UnlockValuePair) UnlockValues; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ValueUnlockAsset) == 80);

}
