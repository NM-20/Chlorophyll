#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CB28
   RuntimeId:        2754
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0938
   VfTable:          0000000142366308
   Address (Base):   00000001430F72D0
*/
#pragma pack(push, 16)
class PullBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SpringConstant; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 PullOffset; /* 0x0020 */
  FB_FLOAT32 SpringFriction; /* 0x0030 */
  FB_BOOLEAN ForceUnsupported; /* 0x0034 */
  char pad_0035[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(PullBuffEffectData) == 64);

}
