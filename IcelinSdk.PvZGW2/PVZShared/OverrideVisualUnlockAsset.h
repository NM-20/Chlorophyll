#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZVisualUnlockAsset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428642E8
   RuntimeId:        21C9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          072E
   VfTable:          0000000142352830
   Address (Base):   00000001430F8350
*/
#pragma pack(push, 8)
class OverrideVisualUnlockAsset : public PVZVisualUnlockAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct VisualUnlockPair) OverrideVisualUnlocks; /* 0x0100 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0108 */
#pragma pack(pop)

static_assert(sizeof(OverrideVisualUnlockAsset) == 264);

}
