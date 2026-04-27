#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428505D8
   RuntimeId:        1399
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0684
   VfTable:          000000014227C800
   Address (Base):   00000001430FC730
*/
#pragma pack(push, 8)
class TurnInPlaceTune : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 whenMovingAngle; /* 0x0018 */
  FB_FLOAT32 whenStoppedAngle; /* 0x001C */
  FB_FLOAT32 speed; /* 0x0020 */
  FB_FLOAT32 accelAngle; /* 0x0024 */
  FB_FLOAT32 slideSpinThreshold; /* 0x0028 */
  FB_BOOLEAN enableUTurn; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(TurnInPlaceTune) == 48);

}
