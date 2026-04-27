#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837EF0
   RuntimeId:        0564
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0642
   VfTable:          00000001421F9A78
   Address (Base):   00000001430F2820
*/
#pragma pack(push, 8)
class MusicBaseAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MusicInterfaceAsset) Interface; /* 0x0018 */
  FB_UINT32 MaxOverlayCount; /* 0x0020 */
  FB_UINT8 ChannelCount; /* 0x0024 */
  FB_UINT8 OverlayChannelCount; /* 0x0025 */
  char pad_0026[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MusicBaseAsset) == 40);

}
