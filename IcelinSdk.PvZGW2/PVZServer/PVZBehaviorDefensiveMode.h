#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBehavior.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FB28
   RuntimeId:        1DF5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10EF
   VfTable:          000000014231D5B8
   Address (Base):   00000001430F9310
*/
#pragma pack(push, 8)
class PVZBehaviorDefensiveMode : public PVZBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 EnterDistance; /* 0x0030 */
  FB_FLOAT32 ExitDistance; /* 0x0034 */
  FB_FLOAT32 ExitDelay; /* 0x0038 */
  char pad_003C[0x0004];
  FB_HANDLE(class BuffData) DefenseBuff; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZBehaviorDefensiveMode) == 72);

}
