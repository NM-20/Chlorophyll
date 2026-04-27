#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142848FA0
   RuntimeId:        0D3E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07EA
   VfTable:          0000000142260580
   Address (Base):   00000001430FD450
*/
#pragma pack(push, 8)
class LevelReportingAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_GUID) BuiltLevels; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(LevelReportingAsset) == 32);

}
