#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850758
   RuntimeId:        13B1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          064C
   VfTable:          000000014227C760
   Address (Base):   00000001430FC3D0
*/
#pragma pack(push, 8)
class FollowerTune : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 circulate_minTime; /* 0x0018 */
  FB_FLOAT32 circulate_maxTime; /* 0x001C */
  FB_FLOAT32 startupSlowness; /* 0x0020 */
  FB_FLOAT32 startupBulk; /* 0x0024 */
  FB_FLOAT32 packingPadding; /* 0x0028 */
  FB_BOOLEAN circulate_enable; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(FollowerTune) == 48);

}
