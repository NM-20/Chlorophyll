#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C0A0
   RuntimeId:        097E
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB7A0
*/
enum BundleHeapType
{
  BundleHeapType_OwnWithParentSmallblock = 0,
  BundleHeapType_OwnWithSmallblock = 1,
  BundleHeapType_OwnWithoutSmallblock = 2,
  BundleHeapType_Parent = 3,
  BundleHeapType_Level = 4,
  BundleHeapType_Global = 5,
  BundleHeapType_Null = 6,
};

}
