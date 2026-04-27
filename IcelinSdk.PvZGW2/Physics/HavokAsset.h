#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851860
   RuntimeId:        14AA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          070C
   VfTable:          000000014227F310
   Address (Base):   00000001430FBB90
*/
#pragma pack(push, 8)
class HavokAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class DataContainer) ExternalAssets; /* 0x0018 */
  FB_RESOURCEREF Resource; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(HavokAsset) == 40);

}
