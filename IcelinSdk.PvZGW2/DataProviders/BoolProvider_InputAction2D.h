#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 00000001428348D8
   RuntimeId:        021A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          106D
   VfTable:          00000001421ECC50
   Address (Base):   000000014311B7B0
*/
#pragma pack(push, 8)
class BoolProvider_InputAction2D : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 ActionXAxis; /* 0x0010 */
  FB_INT32 ActionYAxis; /* 0x0014 */
  FB_FLOAT32 MinValue; /* 0x0018 */
  FB_FLOAT32 MaxValue; /* 0x001C */
  FB_FLOAT32 TargetAngle; /* 0x0020 */
  FB_FLOAT32 HalfAngleTolerance; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_InputAction2D) == 40);

}
