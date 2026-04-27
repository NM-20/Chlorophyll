#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/RotationBodyData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E440
   RuntimeId:        11E5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          084E
   VfTable:          00000001422732C0
   Address (Base):   00000001430FCBB0
*/
#pragma pack(push, 8)
class ChildRotationBodyData : public RotationBodyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ForceModifier; /* 0x0048 */
  FB_FLOAT32 ResetForceModifier; /* 0x004C */
  FB_FLOAT32 ResetForceInputThreshold; /* 0x0050 */
  FB_INT32 RotationInput; /* 0x0054 */
  FB_FLOAT32 WorldSpaceLockEfficiency; /* 0x0058 */
  FB_BOOLEAN UseLinearInput; /* 0x005C */
  char pad_005D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(ChildRotationBodyData) == 96);

}
