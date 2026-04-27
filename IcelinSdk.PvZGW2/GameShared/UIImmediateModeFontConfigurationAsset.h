#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C218
   RuntimeId:        101A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06A4
   VfTable:          0000000142267B00
   Address (Base):   0000000143112990
*/
#pragma pack(push, 8)
class UIImmediateModeFontConfigurationAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct UIImmediateModeFontBundle) FontBundles; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIImmediateModeFontConfigurationAsset) == 32);

}
