#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BD00
   RuntimeId:        26A2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07AC
   VfTable:          000000014235A908
   Address (Base):   00000001431060F0
*/
#pragma pack(push, 8)
class ConsumableData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Key; /* 0x0018 */
  FB_UINT32 Identifier; /* 0x0020 */
  FB_BOOLEAN DelayPersistingActivationsUntilStatsUpload; /* 0x0024 */
  FB_BOOLEAN HideConsumableIfNoneOwned; /* 0x0025 */
  char pad_0026[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ConsumableData) == 40);

}
