#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A098
   RuntimeId:        254F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07E3
   VfTable:          0000000142355770
   Address (Base):   0000000143106C90
*/
#pragma pack(push, 8)
class XdpExportAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 PerLevelProgression; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(FB_CSTRING) ExportedAchievements; /* 0x0020 */
  FB_STDARRAY(struct XdpStatCodeData) ExportedStats; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(XdpExportAsset) == 48);

}
