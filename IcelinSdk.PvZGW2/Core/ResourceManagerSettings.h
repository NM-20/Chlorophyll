#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 00000001428335C8
   RuntimeId:        0117
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11D0
   VfTable:          00000001421E5198
   Address (Base):   00000001430DD010
*/
#pragma pack(push, 8)
class ResourceManagerSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 CasBundleReadBufferSizeKb; /* 0x0020 */
  FB_INT32 CasBundleDecompressBufferSizeKb; /* 0x0024 */
  FB_INT32 CasBundleDecompressBufferCount; /* 0x0028 */
  FB_BOOLEAN BundleProfilingEnable; /* 0x002C */
  FB_BOOLEAN SPUDecompressEnable; /* 0x002D */
  char pad_002E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ResourceManagerSettings) == 48);

}
