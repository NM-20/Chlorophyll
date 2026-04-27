#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142848FC0
   RuntimeId:        0D40
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E97
   VfTable:          0000000142260570
   Address (Base):   00000001431149D0
*/
#pragma pack(push, 8)
class BigWorldSetting : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundAsset) Sound; /* 0x0010 */
  FB_INT32 MinDistance; /* 0x0018 */
  FB_INT32 MaxDistance; /* 0x001C */
  FB_FLOAT32 MinDelayTimeInMinutes; /* 0x0020 */
  FB_FLOAT32 MaxDelayTimeInMinutes; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BigWorldSetting) == 40);

}
