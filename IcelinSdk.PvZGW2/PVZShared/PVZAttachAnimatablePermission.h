#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862858
   RuntimeId:        2090
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B95C0
*/
enum PVZAttachAnimatablePermission
{
  PVZAttachAnimatablePermission_NoCheck = 0,
  PVZAttachAnimatablePermission_CheckParent = 1,
  PVZAttachAnimatablePermission_CheckChild = 2,
  PVZAttachAnimatablePermission_CheckBoth = 3,
};

}
