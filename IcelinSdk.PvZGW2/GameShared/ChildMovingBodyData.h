#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/LinearMovingBodyData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E460
   RuntimeId:        11E7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          084C
   VfTable:          0000000142273240
   Address (Base):   00000001430FCB50
*/
#pragma pack(push, 16)
class ChildMovingBodyData : public LinearMovingBodyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 InputDelay; /* 0x0060 */
  FB_FLOAT32 Speed; /* 0x0064 */
  FB_INT32 InputAction; /* 0x0068 */
  FB_FLOAT32 TriggerImpulse; /* 0x006C */
  FB_BOOLEAN IsOneShotInput; /* 0x0070 */
  char pad_0071[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(ChildMovingBodyData) == 128);

}
