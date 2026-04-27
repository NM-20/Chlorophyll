#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849D08
   RuntimeId:        0E0A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07DE
   VfTable:          000000014225F708
   Address (Base):   0000000143114370
*/
#pragma pack(push, 8)
class PA2TargetProperties : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class PA2BoneList) BoneTargets; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PA2TargetProperties) == 32);

}
