#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EB98
   RuntimeId:        124D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0762
   VfTable:          0000000142272C88
   Address (Base):   0000000143110EF0
*/
#pragma pack(push, 8)
class VehicleCustomizationAsset : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class CustomizationTable) Customization; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VehicleCustomizationAsset) == 32);

}
