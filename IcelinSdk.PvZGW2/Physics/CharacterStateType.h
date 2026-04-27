#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851660
   RuntimeId:        148A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B5C78
*/
enum CharacterStateType
{
  CharacterStateType_OnGround = 0,
  CharacterStateType_InAirJump = 9,
  CharacterStateType_Sliding = 8,
  CharacterStateType_AnimationControlled = 7,
  CharacterStateType_Swimming = 6,
  CharacterStateType_Parachute = 11,
  CharacterStateType_StateCount = 11,
  CharacterStateType_User_5 = 10,
  CharacterStateType_Hover = 10,
  CharacterStateType_User_4 = 9,
  CharacterStateType_User_2 = 7,
  CharacterStateType_User_1 = 6,
  CharacterStateType_User_0 = 5,
  CharacterStateType_Falling = 4,
  CharacterStateType_Climbing = 3,
  CharacterStateType_InAir = 2,
  CharacterStateType_Jumping = 1,
  CharacterStateType_User_3 = 8,
  CharacterStateType_Flying = 5,
};

}
