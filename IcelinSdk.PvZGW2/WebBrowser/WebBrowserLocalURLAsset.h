#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876EE8
   RuntimeId:        2E3B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07D1
   VfTable:          0000000142395EF0
   Address (Base):   00000001430F4930
*/
#pragma pack(push, 8)
class WebBrowserLocalURLAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING LocalPath; /* 0x0018 */
  FB_HANDLE(class RawFileDataAsset) File; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(WebBrowserLocalURLAsset) == 40);

}
