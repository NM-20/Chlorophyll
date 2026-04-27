#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B978
   RuntimeId:        0904
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CC988
*/
enum TransformSpaceChildControlSetting
{
  TransformSpaceChildControlSetting_NoChildControl = 0,
  TransformSpaceChildControlSetting_ControlChildren = 1,
  TransformSpaceChildControlSetting_ControlChildrenAndLockTransforms = 2,
  TransformSpaceChildControlSetting_ControlDescendents = 3,
};

}
