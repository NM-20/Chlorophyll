#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>
#include <IcelinSdk.PvZGW2/DirtyVoip/PCCodec.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835478
   RuntimeId:        02D0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11CC
   VfTable:          00000001421EF008
   Address (Base):   0000000143100C30
*/
#pragma pack(push, 8)
class VoipSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 HeadsetReenumerateFrequency; /* 0x0020 */
  PCCodec PcCodec; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(VoipSettings) == 40);

}
