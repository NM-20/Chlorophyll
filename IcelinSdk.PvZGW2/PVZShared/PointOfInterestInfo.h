#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873908
   RuntimeId:        2BFE
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B6618
   Default Value:    0000000142873920
*/
#pragma pack(push, 16)
struct PointOfInterestInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 Offset; /* 0x0000 */
  FB_INT32 InterestType; /* 0x0010 */
  FB_FLOAT32 Radius; /* 0x0014 */
  TeamId Team; /* 0x0018 */
  FB_INT32 MaxInterested; /* 0x001C */
  FB_FLOAT32 MaxDistance; /* 0x0020 */
  FB_FLOAT32 InnerDefenseDistance; /* 0x0024 */
  FB_FLOAT32 OuterDefenseDistance; /* 0x0028 */
  FB_BOOLEAN ActionPerformed; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PointOfInterestInfo) == 48);

}
