#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834058
   RuntimeId:        018D
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BC560
*/
enum ENodeType
{
  ENodeType_If = 0,
  ENodeType_Task = 1,
  ENodeType_Base = 2,
  ENodeType_Parent = 3,
  ENodeType_Filter = 4,
  ENodeType_Wrapper = 5,
  ENodeType_Inverter = 6,
  ENodeType_Selector = 7,
  ENodeType_Chooser = 8,
  ENodeType_Sequence = 9,
  ENodeType_Reference = 10,
  ENodeType_Concurrent = 11,
};

}
