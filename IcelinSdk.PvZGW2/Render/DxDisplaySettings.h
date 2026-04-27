#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/BaseDisplaySettings.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852270
   RuntimeId:        1550
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11DB
   VfTable:          000000014228DCB0
   Address (Base):   00000001430EAE40
*/
#pragma pack(push, 8)
class DxDisplaySettings : public BaseDisplaySettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_INT32) DebugBreakIgnoredIDs; /* 0x0070 */
  FB_UINT32 NvidiaMinDriverVersion; /* 0x0078 */
  char pad_007C[0x0004];
  FB_CSTRING AmdMinCatalystVersion; /* 0x0080 */
  FB_CSTRING AmdMinDriverPackagingVersion; /* 0x0088 */
  FB_CSTRING IntelMinDriverVersion; /* 0x0090 */
  FB_BOOLEAN WarpDriverEnable; /* 0x0098 */
  FB_BOOLEAN DebugInfoEnable; /* 0x0099 */
  FB_BOOLEAN DebugInfoOutputEnable; /* 0x009A */
  FB_BOOLEAN DebugBreakOnErrorEnable; /* 0x009B */
  FB_BOOLEAN DebugBreakOnWarningEnable; /* 0x009C */
  FB_BOOLEAN DebugBreakOnInfoEnable; /* 0x009D */
  FB_BOOLEAN MultiGpuValidationEnable; /* 0x009E */
  FB_BOOLEAN DxDiagDriverDetectionEnable; /* 0x009F */
  FB_BOOLEAN NvApiEnable; /* 0x00A0 */
  FB_BOOLEAN MinDriverRequired; /* 0x00A1 */
  FB_BOOLEAN PixProfilingEnable; /* 0x00A2 */
  char pad_00A3[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A8 */
#pragma pack(pop)

static_assert(sizeof(DxDisplaySettings) == 168);

}
