#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C968
   RuntimeId:        2738
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0922
   VfTable:          00000001423663F8
   Address (Base):   00000001430F6730
*/
#pragma pack(push, 16)
class WarpBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN DirectionRelativeToSource; /* 0x0018 */
  FB_BOOLEAN SyncWarp; /* 0x0019 */
  char pad_001A[0x0006];
  Vec3 Distance; /* 0x0020 */
  Vec3 Offset; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(WarpBuffEffectData) == 64);

}
