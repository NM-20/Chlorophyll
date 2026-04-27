#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZProxyAnimatableParent.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZAttachAnimatablesBinding.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZAttachAnimatablePermission.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862898
   RuntimeId:        2094
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BB6
   VfTable:          0000000142343970
   Address (Base):   00000001430E81A0
*/
#pragma pack(push, 16)
class PVZAttachAnimatablesEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZProxyAnimatableParent ProxyAnimatable; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform AttachAdjustment; /* 0x0020 */
  PVZAttachAnimatablesBinding Binding; /* 0x0060 */
  PVZAttachAnimatablePermission PermissionCheck; /* 0x0074 */
  FB_CSTRING AttachToBoneName; /* 0x0078 */
  FB_INT32 AttachmentPriority; /* 0x0080 */
  char pad_0084[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(PVZAttachAnimatablesEntityData) == 144);

}
