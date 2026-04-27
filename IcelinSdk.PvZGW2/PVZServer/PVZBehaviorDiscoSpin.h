#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBehavior.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FB68
   RuntimeId:        1DF9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10E8
   VfTable:          000000014231D648
   Address (Base):   00000001430F9250
*/
#pragma pack(push, 8)
class PVZBehaviorDiscoSpin : public PVZBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 WeaponSlot; /* 0x0030 */
  FB_FLOAT32 SpinTime; /* 0x0034 */
  FB_FLOAT32 DizzyTime; /* 0x0038 */
  FB_FLOAT32 DizzyRecovery; /* 0x003C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(PVZBehaviorDiscoSpin) == 64);

}
