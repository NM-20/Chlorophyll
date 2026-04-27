#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UnlockAssetBase.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AAF8
   RuntimeId:        25C0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0723
   VfTable:          000000014235B0A8
   Address (Base):   00000001430CE510
*/
#pragma pack(push, 8)
class WeaponUnlockAsset : public UnlockAssetBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(WeaponUnlockAsset) == 72);

}
