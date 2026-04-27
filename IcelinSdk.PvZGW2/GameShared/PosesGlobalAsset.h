#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F390
   RuntimeId:        12B3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0667
   VfTable:          0000000142276778
   Address (Base):   0000000143110B90
*/
#pragma pack(push, 8)
class PosesGlobalAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class PoseDefinition) Poses; /* 0x0018 */
  FB_HANDLE(class PoseDefinition) DefaultPose; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PosesGlobalAsset) == 40);

}
