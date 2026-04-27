#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UnlockAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869448
   RuntimeId:        2491
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          072F
   VfTable:          0000000142355D98
   Address (Base):   00000001430D9E30
*/
#pragma pack(push, 8)
class GestureUnlockAsset : public UnlockAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 GestureIndex; /* 0x0048 */
  char pad_004C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(GestureUnlockAsset) == 80);

}
