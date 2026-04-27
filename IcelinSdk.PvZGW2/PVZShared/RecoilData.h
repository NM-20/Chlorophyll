#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AFD8
   RuntimeId:        2602
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8B60
   Default Value:    00000001428673A8
*/
#pragma pack(push, 4)
struct RecoilData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 MaxRecoilAngleX; /* 0x0000 */
  FB_FLOAT32 MinRecoilAngleX; /* 0x0004 */
  FB_FLOAT32 MaxRecoilAngleY; /* 0x0008 */
  FB_FLOAT32 MinRecoilAngleY; /* 0x000C */
  FB_FLOAT32 MaxRecoilAngleZ; /* 0x0010 */
  FB_FLOAT32 MinRecoilAngleZ; /* 0x0014 */
  FB_FLOAT32 MaxRecoilFov; /* 0x0018 */
  FB_FLOAT32 MinRecoilFov; /* 0x001C */
  FB_FLOAT32 RecoilRecoveryTime; /* 0x0020 */
  FB_BOOLEAN RecoilFollowsDispersion; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(RecoilData) == 40);

}
