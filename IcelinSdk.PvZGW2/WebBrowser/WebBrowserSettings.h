#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876F78
   RuntimeId:        2E42
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11C8
   VfTable:          0000000142395F98
   Address (Base):   00000001430F48D0
*/
#pragma pack(push, 8)
class WebBrowserSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ApplicationName; /* 0x0020 */
  FB_CSTRING StandardFont; /* 0x0028 */
  FB_CSTRING SerifFont; /* 0x0030 */
  FB_CSTRING SansSerifFont; /* 0x0038 */
  FB_CSTRING MonospaceFont; /* 0x0040 */
  FB_CSTRING CursiveFont; /* 0x0048 */
  FB_CSTRING FantasyFont; /* 0x0050 */
  FB_CSTRING SystemFont; /* 0x0058 */
  FB_CSTRING DefaultCSS; /* 0x0060 */
  FB_HANDLE(class WebBrowserBundleAsset) WebBrowserBundle; /* 0x0068 */
  FB_BOOLEAN SystemFontBold; /* 0x0070 */
  char pad_0071[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */
#pragma pack(pop)

static_assert(sizeof(WebBrowserSettings) == 120);

}
