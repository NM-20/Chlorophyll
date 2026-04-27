#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876F08
   RuntimeId:        2E3D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0687
   VfTable:          0000000142395F00
   Address (Base):   0000000143102C10
*/
#pragma pack(push, 8)
class WebBrowserBundleAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING BundlePath; /* 0x0018 */
  FB_STDARRAY(FB_CSTRING) Fonts; /* 0x0020 */
  FB_STDARRAY(FB_CSTRING) LocalURLs; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(WebBrowserBundleAsset) == 48);

}
