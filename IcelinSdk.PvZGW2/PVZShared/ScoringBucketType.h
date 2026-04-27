#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869938
   RuntimeId:        24DB
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B8E80
*/
enum ScoringBucketType
{
  ScoringBucketType_Disabled = 0,
  ScoringBucketType_Normal = 1,
  ScoringBucketType_Vehicle = 2,
  ScoringBucketType_Kit = 3,
  ScoringBucketType_WeaponClass = 4,
  ScoringBucketType_Costume = 5,
  ScoringBucketType_Count = 6,
};

}
