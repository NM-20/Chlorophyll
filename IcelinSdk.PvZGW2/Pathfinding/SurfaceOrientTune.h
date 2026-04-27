#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850738
   RuntimeId:        13AF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          062D
   VfTable:          000000014227C770
   Address (Base):   00000001430FC430
*/
#pragma pack(push, 8)
class SurfaceOrientTune : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 surfaceOrientThreshold; /* 0x0018 */
  FB_FLOAT32 surfaceOrientSlerpTime; /* 0x001C */
  FB_BOOLEAN alwaysVerticalOnAutoGen; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SurfaceOrientTune) == 40);

}
