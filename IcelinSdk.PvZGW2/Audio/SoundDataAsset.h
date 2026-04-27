#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836A70
   RuntimeId:        0423
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          068B
   VfTable:          00000001421F49D0
   Address (Base):   00000001430D7FF0
*/
#pragma pack(push, 8)
class SoundDataAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct SoundDataChunk) Chunks; /* 0x0018 */
  FB_HANDLE(class SoundDataPolicy) Policy; /* 0x0020 */
  FB_UINT8 PrimePriority; /* 0x0028 */
  FB_UINT8 RequestPriority; /* 0x0029 */
  char pad_002A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SoundDataAsset) == 48);

}
