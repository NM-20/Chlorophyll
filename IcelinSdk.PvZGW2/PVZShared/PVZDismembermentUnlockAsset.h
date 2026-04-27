#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZVisualUnlockAsset.h>
#include <IcelinSdk.PvZGW2/PVZShared/DismemberPart.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868FF0
   RuntimeId:        2451
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          072D
   VfTable:          0000000142356070
   Address (Base):   00000001430F7BD0
*/
#pragma pack(push, 8)
class PVZDismembermentUnlockAsset : public PVZVisualUnlockAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DismembermentHealth; /* 0x0100 */
  DismemberPart HidePart; /* 0x0104 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0108 */
#pragma pack(pop)

static_assert(sizeof(PVZDismembermentUnlockAsset) == 264);

}
