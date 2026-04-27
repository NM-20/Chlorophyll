#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Audio/StreamStarveMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836570
   RuntimeId:        03D3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E93
   VfTable:          00000001421F4B98
   Address (Base):   0000000143118CF0
*/
#pragma pack(push, 8)
class StreamPoolSetup : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 StreamBufferSizeXenon; /* 0x0010 */
  FB_UINT32 StreamBufferSizePs3; /* 0x0014 */
  FB_UINT32 StreamBufferSizeWin32; /* 0x0018 */
  FB_UINT32 StreamBufferSizeGen4a; /* 0x001C */
  FB_UINT32 StreamBufferSizeGen4b; /* 0x0020 */
  FB_UINT32 StreamBufferSizeMobile; /* 0x0024 */
  FB_UINT32 StreamCountXenon; /* 0x0028 */
  FB_UINT32 StreamCountPs3; /* 0x002C */
  FB_UINT32 StreamCountWin32; /* 0x0030 */
  FB_UINT32 StreamCountGen4a; /* 0x0034 */
  FB_UINT32 StreamCountGen4b; /* 0x0038 */
  FB_UINT32 StreamCountMobile; /* 0x003C */
  FB_UINT32 StreamReadBlockSizeXenon; /* 0x0040 */
  FB_UINT32 StreamReadBlockSizePs3; /* 0x0044 */
  FB_UINT32 StreamReadBlockSizeWin32; /* 0x0048 */
  FB_UINT32 StreamReadBlockSizeGen4a; /* 0x004C */
  FB_UINT32 StreamReadBlockSizeGen4b; /* 0x0050 */
  FB_UINT32 StreamReadBlockSizeMobile; /* 0x0054 */
  StreamStarveMode StreamStarveMode; /* 0x0058 */
  char pad_005C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(StreamPoolSetup) == 96);

}
