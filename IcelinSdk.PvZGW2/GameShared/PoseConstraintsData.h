#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F560
   RuntimeId:        12CF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B6838
   Default Value:    000000014284B52C
*/
#pragma pack(push, 1)
struct PoseConstraintsData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_BOOLEAN StandPose; /* 0x0000 */
  FB_BOOLEAN CrouchPose; /* 0x0001 */
  FB_BOOLEAN PronePose; /* 0x0002 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0003 */
#pragma pack(pop)

static_assert(sizeof(PoseConstraintsData) == 3);

}
