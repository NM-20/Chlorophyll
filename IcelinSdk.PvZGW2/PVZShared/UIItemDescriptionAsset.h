#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A330
   RuntimeId:        256B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07D5
   VfTable:          000000014235B388
   Address (Base):   00000001430F77B0
*/
#pragma pack(push, 8)
class UIItemDescriptionAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class UIItemDescriptionAsset) Children; /* 0x0018 */
  FB_REFARRAY(class UIItemDescription) Items; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIItemDescriptionAsset) == 40);

}
