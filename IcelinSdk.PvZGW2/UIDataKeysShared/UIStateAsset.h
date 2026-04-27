#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875AB0
   RuntimeId:        2D44
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0818
   VfTable:          000000014238D858
   Address (Base):   00000001430E0E80
*/
#pragma pack(push, 8)
class UIStateAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class UIComponentData) UIComponents; /* 0x0018 */
  FB_CSTRING StateName; /* 0x0020 */
  FB_CSTRING StatePath; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIStateAsset) == 48);

}
